#include <iostream>

int main(){
    int lowerbound, upperbound, guess;
    char feedback;
    bool correct = false;
    std::cout << "Enter the lower bound: " << std::endl;
    std::cin >> lowerbound;

    std::cout << "Enter the upper bound: " << std::endl;
    std::cin >> upperbound;
    std::cout << "For each guess, enter:" << std::endl;
    std::cout << " l if my guess is less than actual number"  << std::endl;
    std::cout << " g if my guess is greater than actual number"  << std::endl;
    std::cout << " c if my guess is correct"  << std::endl;
    while (correct == false) {
        guess = (lowerbound + upperbound) / 2;
        std::cout << "Is it " << guess << "?" << std::endl;
        std::cin >> feedback;
        if (feedback == 'l') {
            lowerbound = guess + 1;
            } 
        else if (feedback == 'g') {
        upperbound = guess - 1;
            }
        else if (feedback == 'c') {
            std::cout << "I found the correct number." << guess << std::endl;
            correct = true;
            }
    }
}    