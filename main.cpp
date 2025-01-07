#include <iostream>
#include "calculator.h"

// Function to print the welcome message
void Welcome()
{
    std::cout << "*************************************************" << std::endl;
    std::cout << "*                                               *" << std::endl;
    std::cout << "*  WELCOME TO THE C++ CALCULATOR PROGRAM!        *" << std::endl;
    std::cout << "*                                               *" << std::endl;
    std::cout << "*     Choose an operation: +, -, *, /            *" << std::endl;
    std::cout << "*                                               *" << std::endl;
    std::cout << "*************************************************" << std::endl;
}

int main()
{
    Welcome();

    float num1, num2;
    char operation;

    // Ask the user for an operation
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    // Ask the user for two numbers
    std::cout << "Enter two numbers with a space: ";
    std::cin >> num1 >> num2;

    // Call the message function to display the result
    message(num1, num2, operation);

    // To catch any remaining newline or unwanted input
    std::cin.get();
    return 0;
}
