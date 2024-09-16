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