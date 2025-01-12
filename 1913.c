#include <stdio.h>

int maxProductDifference(int* nums, int numsSize){
    for(int i = 0; i<numsSize; i++)
        {
            for(int j = 0; j<numsSize; j++)
            {
                if(nums[i] < nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j]= temp;
                }
            }
        }
    return (nums[numsSize-1] * nums[numsSize-2]) - (nums[0] * nums[1]);
    
}
int main()
{
    int array [] = { 4,2,5,9,7,4,8 };
    int n = sizeof(array) / sizeof(array[0]);

    
    printf("\n max product : %d",maxProductDifference(array,n));
}