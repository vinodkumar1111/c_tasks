/*  c programe to calculate the permuatations and combinations */
/*  permutations npr=n!/(n-r)                                  */
/*  combinations ncr=permutaions/r!                            */

#include <stdio.h>
#include <stdbool.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int permutations(int n, int r)
{

    return factorial(n) / factorial(n - r);
}
int combinations(int n, int r)
{
    return permutations(n, r) / factorial(r);
}
int main()
{
    int n = 10, r = 5;
    printf("factorial of %d = %d\n", n, factorial(n));
    printf("number of permutations(npr) = %d\n", permutations(n, r));
    printf("number of combinations(ncr) = %d\n", combinations(n, r));
}