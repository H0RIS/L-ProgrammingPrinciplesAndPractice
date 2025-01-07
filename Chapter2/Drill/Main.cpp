/*
[1] Write a program that produces a simple form letter based on user input. Begin by typing
the code from §2.1 prompting a user to enter his or her first name and writing ‘‘Hello,
first_name’’ where first_name is the name entered by the user. Then modify your code as
follows: change the prompt to ‘‘Enter the name of the person you want to write to’’ and
change the output to ‘‘Dear first_name ,’’. Don’t forget the comma.

[2] Add an introductory line or two, like ‘‘How are you? I am fine. I miss you.’’ Be sure to
indent the first line. Add a few more lines of your choosing – it’s your letter.

[3] Now prompt the user for the name of another friend and store it in friend_name. Add a
line to your letter: ‘‘Have you seen friend_name lately?’’

[4] Prompt the user to enter the age of the recipient and assign it to an int variable ag e. Hav e
your program write ‘‘I hear you just had a birthday and you are ag e years old.’’ If ag e is 0
or less or 110 or more, call simple_error("you’re kidding!") using simple_error() from
PPP_suppor t.

[5] Add this to your letter:
If your friend is under 12, write ‘‘Next year you will be ag e+1.’’ If your friend is
17, write ‘‘Next year you will be able to vote.’’ If your friend is over 70, write
‘‘Are you retired?’’
Check your program to make sure it responds appropriately to each kind of value.

[6] Add ‘‘Yours sincerely,’’ followed by two blank lines for a signature, followed by your
name.
*/

import std;

int main()
{
    std::cout << "Enter the name of the person you want to write to: \n";
    std::string first_name;
    std::cin >> first_name;

    std::cout << "Enter the name of another friend: \n";
    std::string friend_name;
    std::cin >> friend_name;

    std::cout << "Enter the age of the person you are writing to: \n";
    int age{ -1 };
    std::cin >> age;
    while (age < 0 || age > 110)
    {
        std::cerr << "you're kidding!\n";
        std::cout << "Enter the age of the person you are writing to: \n";
        std::cin >> age;
    }

    std::cout << "Dear " << first_name << ",\n";
    std::cout << "  How are you?\n";
    std::cout << "We haven't talked in a while, I was wondering how are things going.\n";
    std::cout << "Have you seen " << friend_name << " lately?\n";
    std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if (age < 12)
    {
        std::cout << "Next year you will be " << age + 1 << ".\n";
    }
    if (age == 17)
    {
        std::cout << "Next year you will be able to vote.\n";
    }
    if (age > 70)
    {
        std::cout << "Are you retired?\n";
    }
    std::cout << "\nYours sincerely,\n\n\nH";
}