#include <stdio.h>

int sumOfSquares(int* nums, int numsSize) {
    int sum =0;
    
    for(int i = 1;i<=numsSize;i++)
    {
        if(numsSize % i == 0)
        {
            sum += nums[i-1] * nums[i-1] ;
        }
    }
    return sum;
}

int main()
{
    int array [] = { 2,7,1,19,18,3 };
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n sum Of Squares = %d",sumOfSquares(array,n));
}