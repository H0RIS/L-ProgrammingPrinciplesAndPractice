/*
Write a program that prompts the user to enter two integer values. Store these values in int
variables named val1 and val2. Write your program to determine the smaller, larger, sum,
difference, product, and ratio of these values and report them to the user.
*/

import std;

int smaller(int val1, int val2)
{
    if (val1 > val2)
    {
        return val2;
    }
    else
    {
        return val1;
    }
}
int larger(int val1, int val2)
{
    if (val1 > val2)
    {
        return val1;
    }
    else
    {
        return val2;
    }
}

int sum(int val1, int val2)
{
    return val1 + val2;
}

int difference(int val1, int val2)
{
    return val1 - val2;
}

int product(int val1, int val2)
{
    return val1 * val2;
}

int ratio(int val1, int val2)
{
    return val1 / val2;
}

int main()
{
    std::cout << "Enter 2 int values: ";
    int val1{};
    int val2{};
    std::cin >> val1 >> val2;

    std::cout << "Smaller: " << smaller(val1, val2)
        << "\nLarger: " << larger(val1, val2)
        << "\nSum: " << sum(val1, val2)
        << "\nDifference: " << difference(val1, val2)
        << "\nProduct: " << product(val1, val2)
        << "\nRatio: " << ratio(val1, val2);
}