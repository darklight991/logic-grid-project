#ifndef CELL_H
#define CELL_H
#include <iostream>

/**
 * Represents a single cell in the Sudoku grid.
 */
class Cell {
private:
    int value;
    bool isFixed; // true if part of the original puzzle
public:
    Cell();
    Cell(int val, bool fixed);
    
    int getValue() const;
    void setValue(int val);
    bool getIsFixed() const;
    void setIsFixed(bool fixed);
};

#endif // CELL_H
