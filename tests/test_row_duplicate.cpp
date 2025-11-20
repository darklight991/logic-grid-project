#include "Puzzle.h"
#include <cassert>

int main() {
    Puzzle puzzle(9);

    puzzle.setCell(0, 0, 5);
    puzzle.setCell(0, 1, 5); // Duplicate

    assert(puzzle.checkMistakes() == true);
    return 0;
}
