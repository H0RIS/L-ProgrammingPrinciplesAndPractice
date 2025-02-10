/*
Write a program that reads a string from input and then, for each character read, prints out
 the character and its integer value on a line.
*/

import std;

int main()
{
    std::cout << "Enter a string: ";
    std::string string{};
    std::cin >> string;

    for (size_t i = 0; i < string.size(); i++)
    {
        std::cout << string[i] << '\t' << static_cast<int>(string[i]) << '\n';
    }
    return 0;
}