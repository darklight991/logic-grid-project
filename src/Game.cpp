#include "../include/Game.h"
#include <iostream>

Game::Game(int diff) : difficulty(diff) {}

void Game::start() {
    showMenu();
}

void Game::showMenu() {
    std::cout << "=== Logic Grid (Sudoku-like Game) ===\n";
    std::cout << "1. Start Game\n";
    std::cout << "2. Exit\n";
    std::cout << "Enter choice: ";
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        play();
    } else {
        std::cout << "Goodbye!\n";
    }
}

void Game::play() {
    puzzle.generatePuzzle(difficulty);
    puzzle.display();
    std::cout << "\nEnjoy solving!\n";
}
