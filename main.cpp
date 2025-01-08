#include <iostream>
#include "calculator.h"

// Function to print the welcome message
void Welcome()
{
    std::cout << "*************************************************" << std::endl;
    std::cout << "*                                               *" << std::endl;
    std::cout << "*    WELCOME TO THE C++ CALCULATOR PROGRAM!     *" << std::endl;
    std::cout << "*                                               *" << std::endl;
    std::cout << "*                                               *" << std::endl;
    std::cout << "*************************************************" << std::endl;
}

void clearConsole()
{
        system("cls");
}

int main()
{
    Welcome();

    float num1, num2;
    int choice;

    do {
        // Displaying menu
        std::cout << "\nSimple Calculator\n";
        std::cout << "1. Add\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Multiply\n";
        std::cout << "4. Divide\n";
        std::cout << "5. Clear\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Handle user choice
        if (choice == 6) {
            break;
        }

        if (choice == 5) {
            clearConsole();
            continue;
        }

        // Ask the user for two numbers
        std::cout << "Enter two numbers with a space: ";
        std::cin >> num1 >> num2;

        // Perform the operation based on user's choice
        switch (choice) {
        case 1:
            std::cout << "Result: " << add(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << "Result: " << subtract(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << "Result: " << multiply(num1, num2) << std::endl;
            break;
        case 4:
            std::cout << "Result: " << divide(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Invalid choice, please try again!" << std::endl;
        }

    } while (true); // Continue loop until user chooses to exit

    std::cout << "Exiting the calculator. Goodbye!" << std::endl;
    return 0;
}
