#include "Puzzle.h"
#include <cassert>

int main() {
    Puzzle puzzle(9);

    // Same 3x3 box
    puzzle.setCell(1, 1, 3);
    puzzle.setCell(2, 2, 3); // Duplicate in box

    assert(puzzle.checkMistakes() == true);
    return 0;
}
