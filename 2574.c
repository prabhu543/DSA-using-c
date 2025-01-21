#include <stdio.h>
#include <stdlib.h>
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int left[numsSize],right[numsSize];
    left[0] = 0;
    right[numsSize-1] = 0;
    
    // Calculate the left array
    for (int i = 1; i < numsSize; i++) {
        left[i] = left[i - 1] + nums[i - 1];
    }

    // Calculate the right array
    for (int i = numsSize - 2; i >= 0; i--) {
        right[i] = right[i + 1] + nums[i + 1];
    }
    // Calculate the absolute differences
    int* diff = (int *)malloc(numsSize * sizeof(int));
    for(int i = 0 ;i<numsSize;i++)
    diff[i] = abs(left[i] - right[i]);
    
    *returnSize = numsSize;
    return diff;
}
int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(array) /sizeof(array[0]);
    int returnSize;
    int* diff = leftRightDifference(array,n,&returnSize);
    for(int i = 0 ;i<n;i++)
    printf("\n %d",diff[i]);
    
    free(diff);
}