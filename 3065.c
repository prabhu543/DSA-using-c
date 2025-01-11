#include <stdio.h>

int minOperations(int* nums, int numsSize, int k) {
    int count =0;
    
    for(int i =0;i<numsSize;i++)
    {
        if(nums[i] < k)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int array [] = { 2,11,10,1,3 } ;
    int n = sizeof(array) / sizeof(array[0]);
    int k = 5;
    
    printf("\n\n count = %d",minOperations(array,n,k));
}