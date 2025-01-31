#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int count = 0;
    nums[-1] = -1;
    for(int i = 0 ;i<numsSize;i++)
    {
        if(nums[i] != nums[i-1])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int array[] = { 1, 1, 2, 2, 3 };
    int n = sizeof(array) / sizeof(array[0]);
    
    
    printf("\n %d",removeDuplicates(array,n));
}