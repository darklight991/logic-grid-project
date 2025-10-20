#ifndef HINT_SYSTEM_H
#define HINT_SYSTEM_H
#include "Puzzle.h"
#include "Solver.h"

/**
 * HintSystem provides hints to help the player.
 */
class HintSystem {
private:
    Solver solver;
public:
    int getHint(Puzzle& puzzle);
};

#endif // HINT_SYSTEM_H
