#include <stdio.h>
#include <stdlib.h>
int* sumZero(int n, int* returnSize) {
    int *array = (int*)malloc(n*sizeof(int));
    int j =0;
    for(int i = -n/2 ; i<=0 ; i++ )
    {
        if(n % 2 == 0 && i == 0)
        {
            continue;
        }
        else
        {
            array[j] = i;
            array[n - j - 1] = -i;
            j++;
        }
    }
    
    *returnSize = n;
    return array;
}
int main()
{
    int num = 11;
    int returnSize;
    int* array = sumZero(num,&returnSize);
    
    for(int i = 0;i<num ; i++)
    {
        printf("\n %d",array[i]);
    }
}