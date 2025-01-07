/*
Write a program that takes an operation followed by two operands and outputs the result. For
example:
    + 100 3.14
    ∗ 4 5
Read the operation into a string called operation and use an if-statement to figure out which
operation the user wants, for example, if (operation=="+"). Read the operands into variables
of type double. Implement this for operations called +, −, ∗, /, plus, minus, mul, and div with
their obvious meanings.
*/

import std;

int main()
{
    std::cout << "Enter an operand(+, -, *, /) followed by 2 double values: ";
    std::string operand{};
    double val1{};
    double val2{};

    while (std::cin >> operand >> val1 >> val2)
    {
        if (operand == "+")
        {
            std::cout << val1 << " plus " << val2 << " equals " << val1 + val2 << '\n';
        }
        else if (operand == "-")
        {
            std::cout << val1 << " minus " << val2 << " equals " << val1 - val2 << '\n';
        }
        else if (operand == "*")
        {
            std::cout << val1 << " times " << val2 << " equals " << val1 * val2 << '\n';
        }
        else if (operand == "/")
        {
            std::cout << val1 << " divided by " << val2 << " equals " << val1 / val2 << '\n';
        }
        else
        {
            std::cout << "Wrong input values!\n";
        }
    }

}