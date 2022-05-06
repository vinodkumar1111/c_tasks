#include <stdio.h>
void even(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 0)
        {

            printf("%d ", array[i]);
        }
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(array) / sizeof(int);
    printf("even elements are:");
    even(array, len);
    printf("\n");
    return 0;
}