#include <stdio.h>
int averageValue(int* nums, int numsSize) {
    int sum = 0;
    int count =0;
    for(int i = 0;i<numsSize;i++)
    {
        if(nums[i] % 2 == 0  && nums[i] % 3 == 0  )
        {
            sum += nums[i];
            count++;
        }
    }
    if(sum == 0) return 0;
    else
    return sum/count;
}
int main()
{
    int array[] = { 9,3,8,4,2,5,3,8,6,1 };
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n sum = %d",averageValue(array,n));
}