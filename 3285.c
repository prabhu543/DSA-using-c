#include <stdio.h>
#include <stdlib.h>

int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int* nums = (int*)malloc(heightSize * sizeof(int));
    
    int j =0;
    
    for(int i = 1;i<heightSize;i++)
    {
        if(height[i-1] > threshold)
        {
            nums[j] = i;
            j++;
        }
    }
    
    *returnSize = j;
    return nums;
}

int main()
{
    int array[] = { 10, 1, 10, 1, 10 ,1};
    int n = sizeof(array) / sizeof(array[0]);
    int threshold = 5;
    int returnSize = 0;
    
    int* nums = stableMountains(array,n,threshold,&returnSize);
    
    for(int i = 0;i<returnSize;i++)
    {
        printf("\n %d ",nums[i]);
    }
    
    free(nums);
}