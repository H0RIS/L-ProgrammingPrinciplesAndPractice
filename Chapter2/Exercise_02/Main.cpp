/*
Write a program in C++ that converts from miles to kilometers. Your program should have a
 reasonable prompt for the user to enter a number of miles. Hint: A mile is 1.609 kilometers.
*/
import std;

constexpr double m_km_conv_rate{ 1.609 };

double miles_to_km(double miles)
{
    return miles * m_km_conv_rate;
}

int main()
{
    std::cout << "Enter the amount of miles you want to convert to kilometers: ";
    double miles{};
    std::cin >> miles;

    std::cout << miles_to_km(miles) << "km";
}