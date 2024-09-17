/*
Do exercise 6, but with three string values. So, if the user enters the values Steinbeck,
Hemingway, Fitzgerald, the output should be Fitzg erald, Hemingway, Steinbeck.
*/
import std;

int main()
{
    std::cout << "Enter 3 string values: ";
    std::string val1{};
    std::string val2{};
    std::string val3{};
    std::cin >> val1 >> val2 >> val3;

    std::string first{};
    std::string second{};
    std::string third{};

    if (val1 < val2 && val1 < val3)
    {
        first = val1;
    }

    if (val2 < val1 && val2 < val3)
    {
        first = val2;
    }

    if (val3 < val1 && val3 < val2)
    {
        first = val3;
    }

    if ((val1 < val2 && val1 > val3) || (val1 < val3 && val1 > val2))
    {
        second = val1;
    }

    if ((val2 < val1 && val2 > val3) || (val2 < val3 && val2 > val1))
    {
        second = val2;
    }

    if ((val3 < val1 && val3 > val2) || (val3 < val2 && val3 > val1))
    {
        second = val3;
    }

    if (val1 > val2 && val1 > val3)
    {
        third = val1;
    }

    if (val2 > val1 && val2 > val3)
    {
        third = val2;
    }

    if (val3 > val2 && val3 > val1)
    {
        third = val3;
    }

    std::cout << first << ", " << second << ", " << third;
}