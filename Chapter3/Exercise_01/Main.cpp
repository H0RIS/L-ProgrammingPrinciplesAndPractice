/*
* TRYTHIS
1. Use the example above as a model for a program that converts yen ('y'), kroner ('k'),
and pounds ('p') into dollars. If you like realism, you can find conversion rates on
the Web.

2.
Rewrite your currency converter program from the previous TRYTHIS to use a
switch-statement. Add a conversion from Swiss francs.Which version of the pro
gram is easier to write, understand, and modify? Why?

3.
The character 'b' is char(’a’+1), 'c' is char(’a’+2), etc. Use a loop to write out a table of
characters with their corresponding integer values.
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
        constexpr double y_to_d{ 0.0065 };
        constexpr double k_to_d{ 0.14 };
        constexpr double p_to_d{ 1.25 };
        constexpr double f_to_d{ 1.11 };
        double amount{};
        char curr{};

        std::cout << "Enter an amount followed by a currency(y, k, p, f): ";
        std::cin >> amount >> curr;

        switch (curr)
        {
        case 'y':
        {
            std::cout << amount << "y is equal to: " << amount * y_to_d << " dollars.";
            break;
        }
        case 'k':
        {
            std::cout << amount << "k is equal to: " << amount * k_to_d << " dollars.";
            break;
        }
        case 'p':
        {
            std::cout << amount << "p is equal to: " << amount * p_to_d << " dollars.";
            break;
        }
        case 'f':
        {
            std::cout << amount << "f is equal to: " << amount * f_to_d << " dollars.";
            break;

        }
        default:
            std::cout << "invalid argument.\n";
            break;
        }

        break;
    }
    case 3:
    {
        for (size_t i = 'a'; i <='z'; i++)
        {
            std::cout << (char)i << '\t' << i << '\n';
        }
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