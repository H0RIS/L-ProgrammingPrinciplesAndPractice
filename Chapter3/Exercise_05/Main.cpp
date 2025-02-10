/*
Write a program to play a numbers guessing game. The user thinks of a number between 1
 and 100 and your program asks questions to figure out what the number is (e.g., ‘‘Is the num
ber you are thinking of less than 50?’’). Your program should be able to identify the number
 after asking no more than seven questions.
*/
import std;

bool isNumber()
{
    char input{};
    while (std::cin >> input)
    {
        switch (input)
        {
        case 'n':
        {
            return false;
        }
        case 'y':
        {
            return true;
        }
        default:
        {
            std::cout << "Please enter 'y' or 'n'!";
        }
        break;
        }
    }
}
int main()
{
    int number{ 50 };
    int upper{ 100 };
    int lower{ 0 };
    std::cout << "Think of a number between 1-100.\n";

    for (size_t i = 0; i < 7; i++)
    {
        std::cout << "Is your number less than " << number << "? (y/n) ";
        if (isNumber())
        {
            upper = number;
            number = (upper + lower) / 2;
        }
        else
        {
            lower = number;
            number += (upper - lower) / 2;
        }

        if (upper - lower == 1)
        {
            number = lower;
            break;
        }
    }

    std::cout << "Is your number " << number << "? (y/n) ";


    return 0;
}