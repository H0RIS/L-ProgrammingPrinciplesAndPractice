/*
* TRYTHIS
 1.
 Get the ‘‘name and age’’ example to run. Then, modify it to write out the age in
 number of months: read the input in years and multiply (using the ∗ operator) by 12.
 Read the age into a double to allow for children who can be very proud of being five
 and a half years old rather than just five.

 2.
 Get this little program to run. Then, modify it to read an int rather than a double.
 Also, ‘‘exercise’’ some other operations, such as the modulo operator, %. Note that
 for ints / is integer division and % is remainder (modulo), so that 5/2 is 2 (and not 2.5
 or 3) and 5%2 is 1. The definitions of integer ∗, /, and % guarantee that for two positive
 ints a and b we have a/b ∗ b + a%b == a.

 3.

*/

import std;

int main()
{
    std::cout << "Enter which Try This you want to run:\n";
    int num{};
    std::cin >> num;

    switch (num)
    {
    case 1:
    {
        std::cout << "Please enter your first name and age\n";
        std::string first_name{ "???" };
        double age{ -1 };
        std::cin >> first_name >> age;
        std::cout << "Hello, " << first_name << "(age " << age * 12.0 << " months)\n";
    }
    break;
    case 2:
    {
        std::cout << "Please enter an int value: ";
        int n{ 0 };
        std::cin >> n;
        std::cout << "n == " << n
            << "\nn+1 == " << n + 1
            << "\nthree times n == " << n * 3
            << "\ntwice n == " << n * 2
            << "\nn squared == " << n * n
            << "\nhalf of n == " << n / 2
            << "\nsquare root of n == " << std::sqrt(n)
            << "\nn mod 2 == " << n % 2
            << '\n';
    }
        break;
    case 3: std::cout << "You entered three." << std::endl;
        break;
    case 4: std::cout << "You entered four." << std::endl;
        break;
    case 5: std::cout << "You entered five." << std::endl;
        break;
    default:
        break;
    }
    return 0;
}