#include <stdio.h>
int minimumOperations(int* nums, int numsSize) {
    long sum =0;
    for(long i = 0;i<numsSize;i++)
    {
        if((nums[i] % 3== 0)) sum++;
    }
    return (numsSize - sum);
}
int main()
{
    int array [] = { 2, 8, 16, 20,1 } ;
    long n  =sizeof(array) / sizeof(array[0]);

    printf("\n operations :%d",minimumOperations(array,n));
}