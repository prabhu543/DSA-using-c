#include <stdio.h>

int countPairs(int* nums, int numsSize, int target) {
    int count =0;
    for(int i = 0;i<numsSize -1;i++)
    {
        for(int j =i+1 ;j<numsSize ;j++)
        {
            if((nums[i] + nums[j]) < target) count++;
            
        }
    }
    return count;
}

int main()
{
    int nums[] = { -6,2,5,-2,-7,-1,3 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = -2;
    
    int count =0;
    for(int i = 0;i<numsSize -1;i++)
    {
        for(int j =i+1 ;j<numsSize ;j++)
        {
            if((nums[i] + nums[j]) < target) count++;
            
        }
    }
    printf("\n count =%d",countPairs(nums, numsSize, target));
}