#include "Puzzle.h"
#include <cassert>

int main() {
    Puzzle puzzle(9);

    // Fill puzzle with 1–9 in each row (no duplicates)
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            puzzle.setCell(row, col, (col + 1));
        }
    }

    assert(puzzle.checkMistakes() == false);
    return 0;
}
