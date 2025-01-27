import std;

int Square(int x)
{
    int result{};
    for (size_t i = 0; i < x; i++)
    {
        result += x;
    }
    return result;
}