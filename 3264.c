#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    
    int count =0;
    while(count != k)
    {
        int j=0;
        int min = INT_MAX;
        for(int i = 0;i<numsSize;i++)
        {
            if(nums[i] < min )
            {
                j = i;
                min = nums[i];
            }
        }
        nums[j] = min * multiplier;
        count++;
    }
    
    *returnSize = numsSize;
    return nums;
}

int main()
{
    int array[] = { 1,2 } ;
    int n = sizeof(array) / sizeof(array[0]);
    int k = 3, multiplier = 4 ;
    
    int returnSize;
    
    int *nums = getFinalState(array,n,k,multiplier,&returnSize);
    
    for(int i = 0;i<n;i++)
    {
        printf("\n %d",nums[i]);
    }
    
}