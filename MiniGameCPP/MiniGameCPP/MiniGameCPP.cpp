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
void game()
{
    // Global Variables
    int player_choice;
    int paper;
    int rock;
    int scissors;
    int computer_choice;




    // Game
    while (true) {
        // Generating random number
        std::random_device rd; // Create a random device to seed the random number generator
        std::mt19937 gen(rd()); // Use Mersenne Twister engine
        std::uniform_int_distribution<int> dist(1, 3); // Define a distribution range [1, 4]
        computer_choice = dist(gen); // Generate a random number in the range

        // Printing out the game options
        std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
        std::cout << "[1] Rock" << std::endl;
        std::cout << "[2] Paper" << std::endl;
        std::cout << "[3] Scissors" << std::endl;
        std::cout << "[4] Quit" << std::endl;
        std::cout << "\nEnter your choice: ";
        std::cin >> player_choice;

        // Game logic
        if (player_choice == 1 && computer_choice == 1)
        {
            std::system("cls"); // Clear the console
            std::cout << "It's a tie, you both chose Rock" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Sleep for 1 second
            std::system("cls");
        }
        else if (player_choice == 1 && computer_choice == 2)
        {
            std::system("cls");
            std::cout << "You lose, CPU had Paper." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice == 1 && computer_choice == 3)
        {
            std::system("cls");
            std::cout << "You win, CPU had Scissors!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice == 2 && computer_choice == 1)
        {
            std::system("cls");
            std::cout << "You win, CPU had Rock!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice == 2 && computer_choice == 2)
        {
            std::system("cls");
            std::cout << "It's a tie, you both chose Paper!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice == 2 && computer_choice == 3)
        {
            std::system("cls");
            std::cout << "You lose, CPU had Scissors." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice == 3 && computer_choice == 1)
        {
            std::system("cls");
            std::cout << "You lose, CPU had Rock." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice == 3 && computer_choice == 2)
        {
            std::system("cls");
            std::cout << "You win, CPU had Paper!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice == 3 && computer_choice == 3)
        {
            std::system("cls");
            std::cout << "It's a tie, you both chose Scissors!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::system("cls");
        }
        else if (player_choice == 4)
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

int main()
{
    // Game
    game();
    return 0;
}
