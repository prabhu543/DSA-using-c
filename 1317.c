#include <stdio.h>
#include <stdlib.h>
int hasZero(int num) { 
    while (num > 0) { 
        if (num % 10 == 0) return 1; 
        num /= 10; 
    } 
    return 0; 
}
int* getNoZeroIntegers(int n, int* returnSize) {
    int * array = (int*)malloc(2*sizeof(int));
    for(int i =1;i<n ; i++)
    {
        int l = n - i;
        if(!hasZero(i) && !hasZero(l))
        {
            array[0] = i;
            array[1] = l;
            break;
        }
    }
    *returnSize = 2;
    return array;
}
int main()
{
    int num = 1009;
    int returnSize;
    int * array = getNoZeroIntegers(num,&returnSize);
    
    for(int i =0;i<returnSize ; i++)
    printf("\t%d",array[i]);
    free(array);
}