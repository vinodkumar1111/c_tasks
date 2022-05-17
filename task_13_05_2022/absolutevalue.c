/* c code to find the absolute value of a given number */

#include <stdio.h>
#include <stdlib.h>

int findAbsolute(int N)
{

    return abs(N);
}

int main()
{

    int N = -11;
    printf("absulute value of %d is : %d\n",N,findAbsolute(N));
    return 0;
}
