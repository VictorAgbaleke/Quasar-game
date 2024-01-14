//Author Colby Bowie
//January 19th, 2023

#include <iostream>
#include <random>
#include <string>
#include "Spinner.h"


int Spinner::spinner1() {
    std::random_device rd;
    std::uniform_int_distribution<int> dist(4, 7);
    return dist(rd);
}

int Spinner::spinner2() {
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1, 8);
    return dist(rd);
}



int lowStakes::makeBet() {
    std::string userInput = "null";
    int pointValue        = 0;
    std::cout << "You have 3 options while playing:" << std::endl
    << "spin1: The spinner returns a value between 4-7" << std::endl
    << "spin2: The spinner returns a value between 1-8" << std::endl
    << "stand: Returns the number you achieved and the corresponding"
    " credits are given." << std::endl << std::endl;
    while (userInput != "stand") {
        std::cout << "Your currect number is: " << pointValue << std::endl;
        if (pointValue > 20) {
            std::cout << "You reached over 20 points! you get no credits back."
            << std::endl;
            return 21;
        }
        std::cout << "type 'spin1', 'spin2', or 'stand'"
        << std::endl << std::endl;
        std::cin >> userInput;
        if (userInput == "spin1") {
            int firstSpin = spinner1();
            int secondSpin = spinner1();
            if (firstSpin <= secondSpin) {
                pointValue = pointValue + firstSpin;
            } else {
                    pointValue = pointValue + secondSpin;
            }
        } else if (userInput == "spin2") {
            int firstSpin = spinner2();
            int secondSpin = spinner2();
            if (firstSpin <= secondSpin) {
                pointValue = pointValue + firstSpin;
            } else {
                    pointValue = pointValue + secondSpin;
            }
        } else if (userInput == "stand") {
            std::cout << "You reached a score of " << pointValue
            << " and will be given the corresponding credits."
            << std::endl << std::endl;
            return pointValue;
        } else {
            std::cout << "'" << userInput
            << "' is not a valid input, try again." << std::endl;
        }
    }
    return 0;
}



int mediumStakes::makeBet() {
    std::string userInput = "null";
    int pointValue = 0;
    std::cout << "You have 3 options while playing:" << std::endl
    << "spin1: The spinner returns a value between 4-7" << std::endl
    << "spin2: The spinner returns a value between 1-8" << std::endl
    << "stand: Returns the number you achieved and the corresponding"
    << " credits are given." << std::endl << std::endl;
    while (userInput != "stand") {
        std::cout << "Your currect number is: " << pointValue << std::endl;
        if (pointValue > 20) {
            std::cout << "You reached over 20 points! you get no credits back."
            << std::endl;
            return 21;
        }
        std::cout << "type 'spin1', 'spin2', or 'stand'"
        << std::endl << std::endl;
        std::cin >> userInput;
        if (userInput == "spin1") {
            int firstSpin = spinner1();
            pointValue = pointValue + firstSpin;
        } else if (userInput == "spin2") {
            int firstSpin = spinner2();
            pointValue = pointValue + firstSpin;
        } else if (userInput == "stand") {
            std::cout << "You reached a score of " << pointValue
            << " and will be given the corresponding credits."
            << std::endl << std::endl;
            return pointValue;
        } else {
            std::cout << "'" << userInput
            << "' is not a valid input, try again." << std::endl;
        }
    }
    return 0;
}


int highStakes::makeBet() {
    std::string userInput = "null";
    int pointValue = 0;
    std::cout << "You have 3 options while playing:" << std::endl
    << "spin1: The spinner returns a value between 4-7" << std::endl
    << "spin2: The spinner returns a value between 1-8" << std::endl
    << "stand: Returns the number you achieved and the corresponding"
    << " credits are given." << std::endl << std::endl;
    while (userInput != "stand") {
        std::cout << "Your currect number is: " << pointValue << std::endl;
        if (pointValue > 20) {
            std::cout << "You reached over 20 points! you get no credits back."
            << std::endl;
            return 21;
        }
        std::cout << "type 'spin1', 'spin2', or 'stand'"
        << std::endl << std::endl;
        std::cin >> usersInput;
        if (userInput == "spin1") {
            int firstSpin = spinner1();
            int secondSpin = spinner1();
            if (firstSpin >= secondSpin) {
                pointValue = pointValue + firstSpin;
            } else {
                    pointValue = pointValue + secondSpin;
            }
        } else if (userInput == "spin2") {
            int firstSpin = spinner2();
            int secondSpin = spinner2();
            if (firstSpin >= secondSpin) {
                pointValue = pointValue + firstSpin;
            } else {
                pointValue = pointValue + secondSpin;
            }
        } else if (userInput == "stand") {
            std::cout << "You reached a score of " << pointValue
            << " and will be given the corresponding credits."
            << std::endl << std::endl;
            return pointValue;
        } else {
            std::cout << "'" << userInput
            << "' is not a valid input, try again." << std::endl;
        }
    }
    return 0;
}
