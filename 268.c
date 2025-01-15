#include <stdio.h>
int missingNumber(int* nums, int numsSize) {
    int sum = (numsSize*(numsSize+1))/2;

    for(int i = 0;i<numsSize;i++)
        sum -=nums[i];
    return sum;
}
int main()
{
    int array[] = { 3,0,1 };
    int n = sizeof(array) / sizeof(array[0]);
    
    
    printf("\n missing =  %d",missingNumber(array,n));
}