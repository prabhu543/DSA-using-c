#include <stdio.h>
#include <limits.h>

int maximizeSum(int* nums, int numsSize, int k) {
    int max = INT_MIN ;
    
    for(int i = 0;i<numsSize;i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
    }
    
    int sum =0;
    for(int i = 0 ;i<k;i++)
    {
        sum += max;
        max +=1;
    }
    return sum;
}

int main()
{
    int array [] = { 7, 1, 5, 2 };
    int k =4;
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n amx sum = %d",maximizeSum(array,n,k));
}