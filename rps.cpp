#include <iostream>
#include <string> // For string manipulation
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time() to seed random number generator

// Function to get computer's move
char getComputerMove() {
    srand(time(0)); // Seed the random number generator once
    int move = rand() % 3; // Generates 0, 1, or 2

    if (move == 0) return 'R'; // Rock
    else if (move == 1) return 'P'; // Paper
    else return 'S'; // Scissors
}

// Function to determine the winner
std::string determineWinner(char playerMove, char computerMove) {
    if (playerMove == computerMove) {
        return "It's a draw!";
    } else if ((playerMove == 'R' && computerMove == 'S') ||
               (playerMove == 'P' && computerMove == 'R') ||
               (playerMove == 'S' && computerMove == 'P')) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    char playerMove;
    char playAgain;

    do {
        // Get player's move
        std::cout << "Enter your move (R for Rock, P for Paper, S for Scissors): ";
        std::cin >> playerMove;

        // Input validation (optional but recommended)
        while (playerMove != 'R' && playerMove != 'P' && playerMove != 'S') {
            std::cout << "Invalid move. Please enter R, P, or S: ";
            std::cin >> playerMove;
        }

        // Get computer's move
        char computerMove = getComputerMove();

        // Display moves
        std::cout << "Your move: " << playerMove << std::endl;
        std::cout << "Computer's move: " << computerMove << std::endl;

        // Determine and display winner
        std::cout << determineWinner(playerMove, computerMove) << std::endl;

        // Ask to play again
        std::cout << "Do you want to play again? (Y/N): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing!" << std::endl;

    return 0;
}