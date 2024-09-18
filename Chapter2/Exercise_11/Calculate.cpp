#include "Calculate.h"

int Calculate(int pennies, int nickels, int dimes, int quarters, int half_dollars, int dollars)
{
    return ((pennies * 1) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (dollars * 100));
}