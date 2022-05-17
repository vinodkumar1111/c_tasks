/*c code to find the step range of an array*/


#include <stdio.h>
void step_range(int array[], int length, int min, int max, int step)
{
    for (int index = 0, val = min; index < length && val < max; index++, val += step)
    {
        array[index] = val;
        printf("%d ", array[index]);
        printf("\n");
    }
}
int main()
{
    int array[100];
    int length=sizeof(array)/sizeof(int);
    step_range(array, length, 3, 10, 2);
}