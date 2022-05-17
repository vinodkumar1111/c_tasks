
/*c code to to sum  all the digits of an interger*/

#include <stdio.h>
#include <stdbool.h>
int sumdigits_ofintegers(int number)
{
    int reminder, sum = 0;
    while (number != 0)
    {
        reminder = number % 10;
        sum = sum + reminder;
        number = number / 10;
    }
    return sum;
}
int main()
{
    int number = 555;
    printf("the sum of digits of %d = %d\n", number, sumdigits_ofintegers(number));
    return 0;
}