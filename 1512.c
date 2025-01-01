#include <stdio.h>

int numIdenticalPairs(int* nums, int numsSize) {
    int count =0;
    
    for(int i = 0;i<numsSize-1 ;i++)
        for(int j =i+1 ;j<numsSize;j++)
            if(nums[i] == nums[j])
                count++;
                
                
    return count;
}

int main()
{
    int arr[] = {1,2,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("\n count = %d",numIdenticalPairs(arr , n));
    
}