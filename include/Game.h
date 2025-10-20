#ifndef GAME_H
#define GAME_H
#include "Puzzle.h"
#include "HintSystem.h"

/**
 * Game class manages game flow, input, and user interaction.
 */
class Game {
private:
    Puzzle puzzle;
    HintSystem hintSystem;
    int difficulty;
public:
    Game(int diff = 1);
    void start();
    void play();
    void showMenu();
};

#endif // GAME_H

