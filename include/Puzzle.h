#ifndef PUZZLE_H
#define PUZZLE_H
#include <vector>
#include "Cell.h"

/**
 * Puzzle class represents the Sudoku board.
 * Handles generating, displaying, and validating puzzles.
 */
class Puzzle {
private:
    std::vector<std::vector<Cell>> grid;
    int size;
public:
    Puzzle(int size = 9);
    
    void generatePuzzle(int difficulty);
    void display() const;
    bool isSolved() const;
    bool isValidMove(int row, int col, int value) const;
    bool checkMistakes() const;
    void setCell(int row, int col, int value);
    int getCellValue(int row, int col) const;
};

#endif // PUZZLE_H
