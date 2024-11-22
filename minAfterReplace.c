#include <stdio.h>
#include <limits.h>

int minElement(int* nums, int numsSize) {
    int minimum = INT_MAX;
    for(int i = 0;i<numsSize ; i++)
    {
        int sum = 0;
        while(nums[i]> 0)
        {
            int rem = nums[i] % 10;
            nums[i] = nums[i] / 10;
            sum += rem;
        }
        nums[i] = sum;
        
        if(nums[i] < minimum)
            minimum = nums[i];
    }
    return minimum;
}

int main()
{
    int array[] = {999,19,199};
    int n = 3;
    int result = minElement(array,n);
    
    printf("%d",result);
}