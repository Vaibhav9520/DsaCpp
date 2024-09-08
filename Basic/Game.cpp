#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;

    do {
        std::cout << "Enter your guess (1-100): ";
        std::cin >> guess;
 
        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        }

        attempts++;
    } while (guess != secretNumber);

    std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;		}
