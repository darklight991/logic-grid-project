#ifndef SOLVER_H
#define SOLVER_H
#include "Puzzle.h"

/**
 * Solver class handles automatic puzzle solving using backtracking.
 */
class Solver {
public:
    bool solve(Puzzle& puzzle);
private:
    bool findEmptyCell(const Puzzle& puzzle, int& row, int& col);
    bool isSafe(const Puzzle& puzzle, int row, int col, int num);
};

#endif // SOLVER_H

