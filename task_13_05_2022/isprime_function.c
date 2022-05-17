/* c programe to check whether the given number is prime or not */

#include <stdio.h>
#include <stdbool.h>
bool is_prime(int number)
{
    for (int i = 0; i < number; i++)
    {
        if ((number % 2) == 0)

            return false;

        else
            return true;
    }
}
int main()
{
    int number = 100;
    if (is_prime(number))
        printf("%d is prime number\n", number);
    else
        printf("%d is not a prime number\n", number);
    return 0;
}