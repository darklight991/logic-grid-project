#include "../include/Puzzle.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Puzzle::Puzzle(int size) : size(size) {
    grid.resize(size, std::vector<Cell>(size));
}

void Puzzle::generatePuzzle(int difficulty) {
    // Simple mock generator for now — fill a few cells
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
    // For now, just check all cells are filled
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
    return true;
}

void Puzzle::setCell(int row, int col, int value) {
    if (isValidMove(row, col, value))
        grid[row][col].setValue(value);
}

int Puzzle::getCellValue(int row, int col) const {
    return grid[row][col].getValue();
}
