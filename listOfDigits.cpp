// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Dec 2022
// This program takes a number and returns it's digits

#include <iomanip>
#include <iostream>
#include <list>
#include <string>

int digitList(std::list<int> listOfDigits, int userInt) {
    // this function returns the digits

    while (userInt) {
        listOfDigits.push_front(userInt % 10);
        userInt = userInt / 10;
    }
    return userInt;
}

int main() {
    // this function gets user input and returns output
    std::cout << "This program takes a given number"
              << " and returns a list of it's digits."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string userInput;
    int userInt;
    std::list<int> listOfDigits;

    // input
    while (true) {
        try {
            std::cout << "The original number is: ";
            std::cin >> userInput;
            userInt = std::stoi(userInput);

            digitList(listOfDigits, userInt);

            for (int digits : listOfDigits) {
                std::cout << digits << ", ";
            }

            break;
        } catch (std::invalid_argument) {
            std::cout << "\nInvalid Integer." << std::endl;
        }
    }
    std::cout << "\nDone." << std::endl;
}
