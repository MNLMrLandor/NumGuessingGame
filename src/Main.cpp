#include <iostream>
#include <random>

int generateRandomNumber(int min, int max) {
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(min, max);
    return distr(eng);
}

int main() {
    std::cout << "Enter a range to guess in: " << std::endl;
    int num;
    std::cin >> num; //gets range for guessing
    int randNum = generateRandomNumber(1, num);
    while (true){
        std::cout << "Guess a number between 1 and " << num << ": " << std::endl;
        int guess;
        std::cin >> guess;
        if(guess == randNum){
            std::cout << "You guessed it!" << std::endl;
            break;
        } else if(guess < randNum){
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    return 0;
}
