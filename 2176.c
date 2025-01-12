#include <stdio.h>
int countPairs(int* nums, int numsSize, int k) {
    int count =0;
    for(int i =0;i<numsSize-1;i++)
    {
        for(int j = i+1 ; j<numsSize;j++)
        {
            if((nums[i] == nums[j]) && ((i * j) % k == 0) ) count++;
        }
    }
    return count;
}
int main()
{
    int array [] = { 1,2,3,4 };
    int k = 1;
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n output = %d",countPairs(array,n,k));
}