/*
* TRYTHIS
 1.
 Get the ‘‘name and age’’ example to run. Then, modify it to write out the age in
 number of months: read the input in years and multiply (using the ∗ operator) by 12.
 Read the age into a double to allow for children who can be very proud of being five
 and a half years old rather than just five.


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
    case 2: std::cout << "You entered two." << std::endl;
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