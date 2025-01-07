#include <iostream>
#include "calculator.h"

// Add two numbers
float add(float a, float b)
{
    return a + b;
}

// Subtract two numbers
float subtract(float a, float b)
{
    return a - b;
}

// Multiply two numbers
float multiply(float a, float b)
{
    return a * b;
}

// Divide two numbers
float divide(float a, float b)
{
    if (b == 0)
    {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0; // Return 0 in case of division by zero
    }
    return a / b;
}
