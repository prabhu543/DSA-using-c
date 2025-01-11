#include <stdio.h>
#include <stdlib.h>

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *array = (int*)malloc(numsSize * sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                count++;
            }
        }
        array[i] = count;
    }
    
    *returnSize = numsSize;
    return array;
}

void main()
{
    int array[] = { 6,5,4,8 };
    int n = sizeof(array) / sizeof(array[0]);
    int returnSize ;
    
    int *nums = smallerNumbersThanCurrent(array,n,&returnSize);
    
    for(int i = 0;i<n; i++)
    printf("\n %d",nums[i]);
    
    free(nums);
}