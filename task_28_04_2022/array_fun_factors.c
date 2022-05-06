#include <stdio.h>
void array_factors(int *array, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        int number = array[i];
        printf("factors of [%d] are:", i);
        for (int j = 1; j <= number; j++)
        {
            if (number % j == 0)
            {
                printf("%d ", j);
            }
        }
        printf("\n\n");
    }
}
int main()
{

    int array[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(array) / sizeof(int);
    array_factors(array, len);
    return 0;
}