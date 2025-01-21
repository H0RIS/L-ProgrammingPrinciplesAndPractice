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
 Get the ‘‘repeated word detection program’’ to run. Test it with the sentence She she
 laughed "he he he!" because what he did did not look very ver y good good. How many
 repeated words were there? Why? What is the definition of word used here? What
 is the definition of repeated word? (For example, is She she a repetition?)

 4.
 Compile the ‘‘Goodbye, cruel world!’’ program and examine the error messages.
 Did the compiler find all the errors? What did it suggest as the problems? Did the
 compiler get confused and diagnose more than four errors? Remove the errors one
 by one, starting with the lexically first, and see how the error messages change (and
 improve).

import std;

int Main()
{
    STRING s = "Goodbye, cruel world! ";
    cOut << S << '\n';
}

5.
Run this program with a variety of inputs:
 • Small values (e.g., 2 and 3).
 • Large values (larger than 127, larger than 1000).
 • Neg ative values.
 • 56,89, and 128.
 • Non-integer values (e.g., 56.9 and 56.2).
 You’ll find that many inputs produce ‘‘unreasonable’’ results when converted. Basi
cally, we are trying to put a gallon into a pint pot (about 4 liters into a 500ml glass).
*/

import std;

int main()
{
    std::cout << "Enter which Try This you want to run(1-5):\n";
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
        break;
    }
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
        break;
    }
    case 3:
    {
        std::string previous{};
        std::string current{};
        while (std::cin >> current)
        {
            if (current == previous)
            {
                std::cout << "Repeated word: " << current << std::endl;
            }
            previous = current;
        }
        break;
    }
    case 4:
    {
        {
            std::string s = "Goodbye, cruel world! ";
            std::cout << s << '\n';
        }
        break;
    }
    case 5:
    {
        double d = 0;
        while (std::cin >> d)				// repeat the statements below as long as we type in numbers
        {
            int i = d;						// try to squeeze a floating-point value into an integer value
            char c = i;						// try to squeeze an integer into a char
            std::cout << "d==" << d			// the original double
                << " i==" << i				// double converted to int
                << " c==" << c				// int value of char
                << " char(" << c << ")\n";	// the char
        }
    break;
    }
    default:
        break;
    }
    return 0;
}