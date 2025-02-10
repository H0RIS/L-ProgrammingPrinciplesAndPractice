/*
Read a sequence of double values into a vector. Think of each value as the distance between
 two cities along a given route. Compute and print the total distance (the sum of all dis
tances). Find and print the smallest and greatest distance between two neighboring cities.
 Find and print the mean distance between two neighboring cities.
*/

import std;

double SumDistances(std::vector<double> vec)
{
    double sum{ 0.0 };
    for (size_t i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    return sum;
}

double FindSmallest(std::vector<double> vec)
{
    double smallest{ std::numeric_limits<double>::max() };
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i] < smallest)
        {
        smallest = vec[i];
        }
    }
    return smallest;
}

double FindLargest(std::vector<double> vec)
{
    double largest{ std::numeric_limits<double>::min() };
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i] > largest)
        {
            largest = vec[i];
        }
    }
    return largest;
}

double MeanDistances(std::vector<double> vec, double sum)
{
    return sum / vec.size();
}

int main()
{
    std::cout << "Enter double values: ";

    std::vector<double> distances;

    for (double temp; std::cin >> temp; )
    {
        distances.push_back(temp);
    }

    std::cout << "Sum of distances: " << SumDistances(distances) << '\n';
    std::cout << "Smallest distance: " << FindSmallest(distances) << '\n';
    std::cout << "Largest distance: " << FindLargest(distances) << '\n';
    std::cout << "Mean of distances: " << MeanDistances(distances, SumDistances(distances)) << '\n';

    return 0;
}