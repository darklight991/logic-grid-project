#include "../include/Puzzle.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Puzzle::Puzzle(int size) : size(size) {
    grid.resize(size, std::vector<Cell>(size));
}

void Puzzle::generatePuzzle(int difficulty) {
    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            grid[i][j] = Cell(0, false); // empty cells initially
        }
    }

    // Add a few random fixed cells
    for (int k = 0; k < 10; ++k) {
        int row = rand() % size;
        int col = rand() % size;
        int val = (rand() % 9) + 1;
        grid[row][col] = Cell(val, true);
    }
}

void Puzzle::display() const {
    std::cout << "    Sudoku Puzzle:\n\n";
    for (int i = 0; i < size; ++i) {
        if (i % 3 == 0 && i != 0)
            std::cout << "------+-------+------\n";

        for (int j = 0; j < size; ++j) {
            if (j % 3 == 0 && j != 0) std::cout << "| ";
            int val = grid[i][j].getValue();
            std::cout << (val == 0 ? ". " : std::to_string(val) + " ");
        }
        std::cout << "\n";
    }
}

bool Puzzle::isSolved() const {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            if (grid[i][j].getValue() == 0)
                return false;
    return true;
}

bool Puzzle::isValidMove(int row, int col, int value) const {
    if (row < 0 || col < 0 || row >= size || col >= size)
        return false;
    if (value < 1 || value > 9)
        return false;
    if (grid[row][col].getIsFixed())
        return false;

    // Check row
    for (int i = 0; i < size; i++)
        if (grid[row][i].getValue() == value)
            return false;

    // Check column
    for (int i = 0; i < size; i++)
        if (grid[i][col].getValue() == value)
            return false;

    // Check 3x3 subgrid
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[startRow + i][startCol + j].getValue() == value)
                return false;

    return true;
}

void Puzzle::setCell(int row, int col, int value) {
    if (isValidMove(row, col, value))
        grid[row][col].setValue(value);
}

int Puzzle::getCellValue(int row, int col) const {
    return grid[row][col].getValue();
}

bool Puzzle::checkMistakes() const {
    bool hasMistakes = false;

    std::cout << "\n=== Checking for Mistakes ===\n";

    // --- Check Rows ---
    for (int row = 0; row < size; row++) {
        int count[10] = {0};
        for (int col = 0; col < size; col++) {
            int val = grid[row][col].getValue();
            if (val != 0) count[val]++;
        }
        for (int n = 1; n <= 9; n++) {
            if (count[n] > 1) {
                hasMistakes = true;
                std::cout << "Row " << row + 1 << " has duplicate number: " << n << "\n";
            }
        }
    }

    // --- Check Columns ---
    for (int col = 0; col < size; col++) {
        int count[10] = {0};
        for (int row = 0; row < size; row++) {
            int val = grid[row][col].getValue();
            if (val != 0) count[val]++;
        }
        for (int n = 1; n <= 9; n++) {
            if (count[n] > 1) {
                hasMistakes = true;
                std::cout << "Column " << col + 1 << " has duplicate number: " << n << "\n";
            }
        }
    }

    // --- Check 3x3 Subgrids ---
    for (int boxRow = 0; boxRow < 3; boxRow++) {
        for (int boxCol = 0; boxCol < 3; boxCol++) {
            int count[10] = {0};
            for (int row = boxRow * 3; row < boxRow * 3 + 3; row++) {
                for (int col = boxCol * 3; col < boxCol * 3 + 3; col++) {
                    int val = grid[row][col].getValue();
                    if (val != 0) count[val]++;
                }
            }
            for (int n = 1; n <= 9; n++) {
                if (count[n] > 1) {
                    hasMistakes = true;
                    std::cout << "Subgrid (" 
                              << boxRow + 1 << "," << boxCol + 1 
                              << ") has duplicate number: " << n << "\n";
                }
            }
        }
    }

    if (!hasMistakes) {
        std::cout << "No mistakes found. Great job!\n";
    }

    return hasMistakes;
}
