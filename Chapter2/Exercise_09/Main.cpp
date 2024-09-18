/*
Write a program that converts spelled-out numbers such as ‘‘zero’’ and ‘‘two’’ into digits,
 such as 0 and 2. When the user inputs a number, the program should print out the corre
sponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the
 user enters something that doesn’t correspond, such as stupid computer!.
*/
import std;

int main()
{
    std::cout << "Enter a digit spelled out (\"two\"): ";
    std::string value{};

    while (std::cin >> value)
    {
        if (value == "zero")
        {
            std::cout << "You entered: 0\n";
        }
        else if (value == "one")
        {
            std::cout << "You entered: 1\n";
        }
        else if (value == "two")
        {
            std::cout << "You entered: 2\n";
        }
        else if (value == "three")
        {
            std::cout << "You entered: 3\n";
        }
        else if (value == "four")
        {
            std::cout << "You entered: 4\n";
        }
        else if (value == "five")
        {
            std::cout << "You entered: 5\n";
        }
        else if (value == "six")
        {
            std::cout << "You entered: 6\n";
        }
        else if (value == "seven")
        {
            std::cout << "You entered: 7\n";
        }
        else if (value == "eight")
        {
            std::cout << "You entered: 8\n";
        }
        else if (value == "nine")
        {
            std::cout << "You entered: 9\n";
        }
        else
        {
            std::cout << "Not a digit I know!\n";
        }
    }
}