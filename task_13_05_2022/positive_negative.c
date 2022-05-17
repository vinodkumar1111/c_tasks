
/*c code to check whether the given number is positive or negative*/

#include <stdio.h>
#include <stdbool.h>
bool is_positve(float num)
{
    if (num >= 0)
        return true;
    else
        return false;
}


bool is_negative(float num)
{
    if (num < 0)
        return true;
    else
        return false;
}
int main()
{
    float num = 1.1;
    printf("%d\n", is_positve(num));
    printf("%d\n", is_negative(num));

    return 0;
}