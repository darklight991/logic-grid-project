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
    while (true) {
        std::cout << "\n=== Game Menu ===\n";
        std::cout << "1. Generate New Puzzle\n";
        std::cout << "2. Check Mistakes\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter choice: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            puzzle.generatePuzzle(difficulty);
            puzzle.display();
        }
        
        else if (choice == 2) {
            puzzle.checkMistakes();
        }

        else if (choice == 3) {
    int row, col, val;
    std::cout << "Enter row (1-9): ";
    std::cin >> row;
    std::cout << "Enter col (1-9): ";
    std::cin >> col;
    std::cout << "Enter value (1-9): ";
    std::cin >> val;

    if (puzzle.isValidMove(row - 1, col - 1, val)) {
        puzzle.setCell(row - 1, col - 1, val);
        puzzle.display();
    } else {
        std::cout << "Invalid move! Try again.\n";
    }

    if (puzzle.isSolved()) {
        std::cout << " Puzzle Solved! Great job!\n";
        break;
    }
}
else if (choice == 4) {
    std::cout << "Goodbye!\n";
    return;
}
