#include <iostream>
#include "calculator.h"

// Function to perform the operation and display the result
void message(float num1, float num2, char operation)
{
    float result = 0.0f;

    switch (operation)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        // Check for division by zero
        if (num2 == 0)
        {
            std::cout << "Error: Division by zero!" << std::endl;
            return;
        }
        result = divide(num1, num2);
        break;
    default:
        std::cout << "Error! Invalid operator!" << std::endl;
        return;
    }

    std::cout << num1 << " " << operation << " " << num2 << " = " << result << std::endl;
}
