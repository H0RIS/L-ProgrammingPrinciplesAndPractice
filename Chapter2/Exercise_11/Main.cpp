/*
Write a program that prompts the user to enter some number of pennies (1-cent coins), nick
els (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent
 coins), and one-dollar coins (100-cent coins). Query the user separately for the number of
 each size coin, e.g., ‘‘How many pennies do you have?’’ Then your program should print out
 something like this:
 You have 23 pennies.
 You have 17 nickels.
 You have 14 dimes.
 You have 7 quar ters.
 You have 3 half dollars.
 The value of all of your coins is 573 cents.
 Make some improvements: if only one of a coin is reported, make the output grammatically
 correct, e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in dollars and cents,
 i.e., .73 instead of 573 cents.
*/

import std;
#include "Calculate.h"

int main()
{

    std::cout << "How many pennies do you have?\n";
    int pennies{};
    std::cin >> pennies;

    std::cout << "How many nickels do you have?\n";
    int nickels{};
    std::cin >> nickels;

    std::cout << "How many dimes do you have?\n";
    int dimes{};
    std::cin >> dimes;

    std::cout << "How many quarters do you have?\n";
    int quarters{};
    std::cin >> quarters;

    std::cout << "How many half dollars do you have?\n";
    int half_dollars{};
    std::cin >> half_dollars;

    std::cout << "How many dollars do you have?\n";
    int dollars{};
    std::cin >> dollars;

    int value = Calculate(pennies, nickels, dimes, quarters, half_dollars, dollars);

    (pennies == 1) ? std::cout << "You have " << pennies << " penny.\n" : std::cout << "You have " << pennies << " pennies.\n";
    (nickels == 1) ? std::cout << "You have " << nickels << " nickel.\n" : std::cout << "You have " << nickels << " nickels.\n";
    (dimes == 1) ? std::cout << "You have " << dimes << " dime.\n" : std::cout << "You have " << dimes << " dimes.\n";
    (quarters == 1) ? std::cout << "You have " << quarters << " quarter.\n" : std::cout << "You have " << quarters << " quarters.\n";
    (half_dollars == 1) ? std::cout << "You have " << half_dollars << " half_dollar.\n" : std::cout << "You have " << half_dollars << " half_dollars.\n";
    (dollars == 1) ? std::cout << "You have " << dollars << " dollar.\n" : std::cout << "You have " << dollars << " dollars.\n";
    std::cout << "Which is " << value / 100.0 << " dollars\n";

    return 0;
}