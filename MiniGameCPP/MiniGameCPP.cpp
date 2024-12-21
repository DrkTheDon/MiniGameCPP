#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
#include <random>
#include <thread>
#include <chrono>

/*
LIST OF MINI GAMES THAT SHOULD BE DONE:
1. Rock, Paper, Scissors§
2. Tic Tac Toe
3. Hangman
4. Number Guessing Game
5. Blackjack
6. Connect Four
*/

// Global Variables

int paper;
int rock;
int scissors;

int c1, c2, c3, c4, c5, c6, c8;

void game()
{
    int computer_choice_rpc;
    int player_choice_rpc;
    // Game
    while (true) {

        // Generating random number
        std::random_device rd; // Create a random device to seed the random number generator
        std::mt19937 gen(rd()); // Use Mersenne Twister engine
        std::uniform_int_distribution<int> dist(1, 3); // Define a distribution range [1, 4]
        computer_choice_rpc = dist(gen); // Generate a random number in the range

        // Printing out the game options
        std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
        std::cout << "[1] Rock" << std::endl;
        std::cout << "[2] Paper" << std::endl;
        std::cout << "[3] Scissors" << std::endl;
        std::cout << "[4] Quit" << std::endl;
        std::cout << "\nEnter your choice: ";
        std::cin >> player_choice_rpc;

        // Game logic
        if (player_choice_rpc == 1 && computer_choice_rpc == 1)
        {
            std::system("cls"); // Clear the console
            std::cout << "It's a tie, you both chose Rock" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Sleep for 1 second
            std::system("cls");
        }
        else if (player_choice_rpc == 1 && computer_choice_rpc == 2)
        {
            std::system("cls");
            std::cout << "You lose, CPU had Paper." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice_rpc == 1 && computer_choice_rpc == 3)
        {
            std::system("cls");
            std::cout << "You win, CPU had Scissors!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice_rpc == 2 && computer_choice_rpc == 1)
        {
            std::system("cls");
            std::cout << "You win, CPU had Rock!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice_rpc == 2 && computer_choice_rpc == 2)
        {
            std::system("cls");
            std::cout << "It's a tie, you both chose Paper!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice_rpc == 2 && computer_choice_rpc == 3)
        {
            std::system("cls");
            std::cout << "You lose, CPU had Scissors." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice_rpc == 3 && computer_choice_rpc == 1)
        {
            std::system("cls");
            std::cout << "You lose, CPU had Rock." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice_rpc == 3 && computer_choice_rpc == 2)
        {
            std::system("cls");
            std::cout << "You win, CPU had Paper!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice_rpc == 3 && computer_choice_rpc == 3)
        {
            std::system("cls");
            std::cout << "It's a tie, you both chose Scissors!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice_rpc == 4)
        {
            std::system("cls");
            std::cout << "Thanks for playing!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
            break; // Exit the game
        }
        else
        {
            std::system("cls");
            std::cout << "Invalid choice" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
    }

}
void choice_menu() {
    while (true) {

        int choice;
        std::cout << "Welcome to MiniGameCPP!\n" << std::endl;
        std::cout << "[1] Rock Paper Scissors" << std::endl;
        std::cout << "[2] Tic Tac Toe" << std::endl;
        std::cout << "[3] Hangman" << std::endl;
        std::cout << "[4] Number Guessing Game" << std::endl;
        std::cout << "[5] Blackjack" << std::endl;
        std::cout << "[6] Connect Four" << std::endl;
        std::cout << "[7] Quit" << std::endl;
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;
        if (!std::cin)
        {
            std::system("cls");
            std::cout << "Invalid input" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
        if (choice == 1)
        {
            std::system("cls");
            game();
        }
        else if (choice == 2)
        {
            std::system("cls");
            std::cout << "Tic Tac Toe is under development." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
            

        }
        else if (choice == 3)
        {
            // Hangman
            std::system("cls");
            std::cout << "Hangman is under development." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");


        }
        else if (choice == 4)
        {
            // Number Guessing Game
            std::system("cls");
            std::cout << "Number Guessing Game is under development." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");


        }
        else if (choice == 5)
        {
            // Blackjack
            std::system("cls");
            std::cout << "Blackjack is under development." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");

        }
        else if (choice == 6)
        {
            // Connect Four
            std::system("cls");
            std::cout << "Connect Four is under development." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");

        }
        else if (choice == 7)
        {
            // exits the program
            std::system("cls");
            std::cout << "Thanks for playing!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
            exit(0);
        }
        else
        {
            std::system("cls");
            std::cout << "Invalid choice" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
    }
}
int main()
{
    // choice_menu
    choice_menu();

    return 0;
}
