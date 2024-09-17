/*
Modify the program above to ask the user to enter floating-point values and store them in
 double variables. Compare the outputs of the two programs for some inputs of your choice.
 Are the results the same? Should they be? What’s the difference?
*/

import std;

double smaller(double val1, double val2)
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
double larger(double val1, double val2)
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

double sum(double val1, double val2)
{
    return val1 + val2;
}

double difference(double val1, double val2)
{
    return val1 - val2;
}

double product(double val1, double val2)
{
    return val1 * val2;
}

double ratio(double val1, double val2)
{
    return (double)val1 / (double)val2;
}

int main()
{
    std::cout << "Enter 2 double values: ";
    double val1{};
    double val2{};
    std::cin >> val1 >> val2;

    std::cout << "Smaller: " << smaller(val1, val2)
        << "\nLarger: " << larger(val1, val2)
        << "\nSum: " << sum(val1, val2)
        << "\nDifference: " << difference(val1, val2)
        << "\nProduct: " << product(val1, val2)
        << "\nRatio: " << ratio(val1, val2);
}