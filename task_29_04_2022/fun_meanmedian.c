#include <stdio.h>
float mean(int *array, int len)
{
    float sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = sum + array[i];
    }
    float mean = sum / len;
    return mean;
}
float median(int *array,int len)
{
    float median=0;
    if(len%2==0)
    return(array[len/2] + array[(len/2)-1])/2;
      else
      return array[len/2];
return median;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7,8};
    int len = sizeof(array) / sizeof(int);
    float array_mean = mean(array, len);
    printf("mean is %f\n", array_mean);
    float array_median=median(array,len);
    printf("median is %f",array_median);
    return 0;
}
