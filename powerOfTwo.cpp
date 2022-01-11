// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 10, 2022
// This program allows a user to enter a positive number and then see
// all of the numbers up to that number squared
#include <iostream>
#include <iomanip>
#include <cmath>


int main() {
  int numberCounter;
  int userNumInt;
  int powerOfTwo;
  std::string userNum;

  std::cout << " \n";
  std::cout << "This program will display all of the positive numbers up";
  std::cout << " to a certain number squared.\n";
  std::cout << " \n";
  std::cout << "Enter a positive number: ";
  std::cin >> userNum;
  std::cout << " \n";

  try {
      // Make sure user input is an integer
        userNumInt = std::stoi(userNum);

        // Makes sure that user number is positive
      if (userNumInt >= 0) {
        // Loop that displays the squares of all of the numbers
        for (numberCounter = 0; numberCounter <= userNumInt; numberCounter++) {
            powerOfTwo = pow(numberCounter, 2);
            std::cout << numberCounter << "^2 = " << powerOfTwo << "\n";
        }
        // Print end message
        std::cout << " \n";
        std::cout << "Thanks for playing! ";

      } else {
          std::cout << userNumInt << " is not a positive number.\n";
      }
      } catch (std::invalid_argument) {
              std::cout << userNum << " is not a number\n";
      }
}
