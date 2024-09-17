/*
Write a program that doesn’t do anything, but declares a number of variables with legal and
 illegal names (such as int double = 0;), so that you can see how the compiler reacts.
*/

import std;

int main()
{
    int myint{ 1 };
    int int{ 23 };                  // 1>D:\Learning\Cpp\PPP\Chapter2\Exercises\03\main.cpp(5,6): error C2632: 'int' followed by 'int' is illegal
    string mystring{ "string" };    // 1>D:\Learning\Cpp\PPP\Chapter2\Exercises\03\main.cpp(7, 2) : error C2065 : 'string' : undeclared identifier
                                    // 1>D:\Learning\Cpp\PPP\Chapter2\Exercises\03\main.cpp(7, 9) : error C2146 : syntax error : missing ';' before identifier 'mystring'
                                    // 1>D:\Learning\Cpp\PPP\Chapter2\Exercises\03\main.cpp(7, 9) : error C2065 : 'mystring' : undeclared identifier
    bool mybool{ int };             // 1>D:\Learning\Cpp\PPP\Chapter2\Exercises\03\main.cpp(10,14): error C2062: type 'int' unexpected
}