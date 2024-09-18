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