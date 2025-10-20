#include <iostream>
#include "../include/Game.h"
using namespace std;

void displayMenu();

int main() {
    Game game(1);
    bool running = true;
    int choice;

    while (running) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            game.start();
        } else if (choice == 2) {
            cout << "Goodbye!" << endl;
            running = false;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\n=== Logic Grid Game ===" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Exit" << endl;
    cout << "Choice: ";
}
