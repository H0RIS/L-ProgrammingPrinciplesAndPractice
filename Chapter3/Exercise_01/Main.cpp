/*
* TRYTHIS
1. Use the example above as a model for a program that converts yen ('y'), kroner ('k'),
and pounds ('p') into dollars. If you like realism, you can find conversion rates on
the Web.
*/

import std;

int main() 
{
    std::cout << "Enter which Try This you want to run(1-6):\n";
    int num{};
    std::cin >> num;

    switch (num)
    {
    case 1:
    {
        constexpr double y_to_d{ 0.0065 };
        constexpr double k_to_d{ 0.14 };
        constexpr double p_to_d{ 1.25 };
        double amount{};
        char curr{};

        std::cout << "Enter an amount followed by a currency(y, k, p): ";
        std::cin >> amount >> curr;
        
        if (curr == 'y')
        {
            std::cout << amount << "y is equal to: " << amount * y_to_d << " dollars.";
        }
        else if (curr == 'k')
        {
            std::cout << amount << "k is equal to: " << amount * k_to_d << " dollars.";

        }
        else if (curr == 'p')
        {
            std::cout << amount << "p is equal to: " << amount * p_to_d << " dollars.";

        }
        else
        {
            std::cout << "invalid argument.\n";
        }
        break;
    }
    case 2:
    {
        break;
    }
    case 3:
    {
        break;
    }
    case 4:
    {
        break;
    }
    case 5:
    {
        break;
    }
    case 6:
    {
        break;
    }
    default:
        break;
    }
    return 0;
}