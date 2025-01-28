#include <stdio.h>
#include <stdlib.h>

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* array = (int*)malloc(numsSize * sizeof(int));
    
    for(int i =0;i<n;i++)
    {
        array[2*i] = nums[i];
        array[2*i + 1] = nums[i + n];
    }
    *returnSize = numsSize;
    return array;
}
int main()
{
    int nums[] = { 1,2,3,4,4,3,2,1 },n= 4;
    int numsSize  = 2 *n;
    int returnSize;
    
    int* array = shuffle(nums,numsSize,n,&returnSize);
    for(int i = 0;i<numsSize ;i++)
    printf("\n %d",array[i]);
    
    free(array);
}