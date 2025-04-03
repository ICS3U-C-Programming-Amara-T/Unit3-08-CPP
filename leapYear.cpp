// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: April 3, 2025
// This program caculates if its a year is a leap year

#include <iostream>
#include <string>

main() {
    // Define variables
    std::string yearAsString;
    int yearAsNumber;

    // Ask user for age
    std::cout << "Enter the year: ";
    std::cin >> yearAsString;

    // Check if the user's age matches the grandparents' criteria
    try {
        yearAsNumber = std::stoi(yearAsString);
        if (yearAsNumber % 4 == 0) {
            if (yearAsNumber % 100 == 0) {
                 if (yearAsNumber % 400 == 0) {
                     std::cout << "The year is: " << yearAsNumber
                               << " This is a leap year.\n";
                     std::cout << "\n";
                 } else {
                     std::cout << "The year is: " << yearAsNumber
                               << " This is not a leap year.\n";
                     std::cout << "\n";
                 }
            } else {
                std::cout << "The year is: " << yearAsNumber
                          << " This is a leap year.\n";
                std::cout << "\n";
            }
        } else {
            std::cout << "The year is: " << yearAsNumber
                      << " This is not a leap year.\n";
            std::cout << "\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid year ";
    }
    std::cout << "Thanks for playing!" << std::endl;
}
