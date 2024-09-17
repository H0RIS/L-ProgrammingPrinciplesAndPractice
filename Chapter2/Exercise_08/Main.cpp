/*
 Write a program to test an integer value to determine if it is odd or even. As always, make
 sure your output is clear and complete. In other words, don’t just output yes or no. Your out
put should stand alone, like The value 4 is an even number. Hint: See the remainder (modulo)
 operator in §2.4.
*/

import std;

int main()
{
    std::cout << "Enter an integer value to determine if it is odd or even: ";
    int value{};
    std::cin >> value;

    if (value % 2)
    {
        std::cout << "The value " << value << " is an odd number.";
    }
    else
    {
        std::cout << "The value " << value << " is an even number.";

    }
}