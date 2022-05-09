#include <stdio.h>
void get_sort(int len1 ,int len2,int sorted_array[]){
     for (int i = 0; i < len1+len2; ++i) 
        {
 
            for (int j = i + 1; j < len1+len2; ++j)
            {
 
                if (sorted_array[i] > sorted_array[j]) 
                {
 
                    int a =  sorted_array[i];
                    sorted_array[i] = sorted_array[j];
                    sorted_array[j] = a;
 
                }
 
            }
 
        }
 
        
        for (int i = 0; i < len1+len2; ++i)
            printf("merged_array-%d =%d\n",i, sorted_array[i]);
            printf("\n\n");
}
void mergearray(int array1[], int len1, int array2[], int len2, int sorted_array[])
{
    int i=0, j=0, k=0;
    
    while(i<len1&&j<len2){
        if(array1[i]<array2[j]){
            sorted_array[k]=array1[i];
            k++;
            i++;
        }else{
            sorted_array[k]=array2[j];
            k++;
            j++;
        }
    }
    while(i<len1){
        sorted_array[k]=array1[i];
        k++;
        i++;
    }
    while(j<len2){
            sorted_array[k]=array2[j];
            k++;
            j++;
    }
     get_sort(len1,len2 ,sorted_array);
}

int main()
{
    int array1[] = {1, 6, 3, 4, 12};
    int len1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {6, 11, 8, 79, 1};
    int len2 = sizeof(array2) / sizeof(array2[0]);
    int sorted_array[100];
    printf("sorted array\n");
    mergearray(array1, len1, array2, len2, sorted_array);
    return 0;
}
