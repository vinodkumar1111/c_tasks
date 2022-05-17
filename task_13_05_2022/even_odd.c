/*c code to check whether the given number is even or odd*/

#include <stdio.h>
#include <stdbool.h>
bool is_even(int number)
{

    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_odd(int number)
{

    if (number % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int number = 10;
    if (is_even(number))
    {
        printf("%d is an even number\n", number);
    }
    else
    {
        printf("%d is not an even number\n", number);
    }
    if (is_odd(number))
    {
        printf("%d is an odd number\n", number);
    }
    else
    {
        printf("%d is not an odd number\n", number);
    }
    return 0;
}