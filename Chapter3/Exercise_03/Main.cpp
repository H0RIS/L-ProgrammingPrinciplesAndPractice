/*
If we define the median of a sequence as ‘‘a number so that exactly as many elements come
 before it in the sequence as come after it,’’ fix the program in §3.6.3 so that it always prints
 out a median. Hint: A median need not be an element of the sequence.

*/
#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

int main()
{
    std::vector<double> temps;

    for (double temp; std::cin >> temp; )
    {
        temps.push_back(temp);
    }

    double sum = 0;
    for (double x : temps)
    {
        sum += x;
    }

    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    std::ranges::sort(temps);
    
    if (temps.size() / 2)
    {
        std::cout << "Median temperature: " << temps[(temps.size() / 2)] << '\n';
    }
    else
    {
        std::cout << "Median temperature: " << (temps[(temps.size() / 2) + 1] + temps[(temps.size() / 2)]) / 2.0 << '\n';
    }
}