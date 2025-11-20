#include "../include/Game.h"
#include <iostream>

Game::Game(int diff) : difficulty(diff) {}

void Game::start() {
    showMenu();
}

void Game::showMenu() {
<<<<<<< HEAD
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
=======
    while (true) {
        std::cout << "=== Logic Grid (Sudoku-like Game) ===\n";
        std::cout << "1. Start Game\n";
        std::cout << "2. Check Mistakes\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter choice: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            play();
        }
        else if (choice == 2) {
            puzzle.checkMistakes();
        }
        else if (choice == 3) {
            std::cout << "Goodbye!\n";
            return;
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }
}

void Game::play() {          
>>>>>>> aaf30b4 (Implemented second feature (mistake checker), updated Game.cpp, added tests)
    puzzle.generatePuzzle(difficulty);
    puzzle.display();
    std::cout << "\nEnjoy solving!\n";
}
<<<<<<< HEAD
=======



>>>>>>> aaf30b4 (Implemented second feature (mistake checker), updated Game.cpp, added tests)
