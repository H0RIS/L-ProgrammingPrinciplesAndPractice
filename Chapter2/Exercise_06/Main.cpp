/*
Write a program that prompts the user to enter three integer values, and then outputs the val
ues in numerical sequence separated by commas. So, if the user enters the values 10 4 6, the
 output should be 4, 6, 10. If two values are the same, they should just be ordered together.
 So, the input 454should give 4, 4, 5.
*/
import std;

int main()
{
    std::cout << "Enter 3 int values: ";
    int val1{};
    int val2{};
    int val3{};
    std::cin >> val1 >> val2 >> val3;

    int first{};
    int second{};
    int third{};

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