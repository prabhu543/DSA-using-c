#include <stdio.h>
#include <stdlib.h>
int countKDifference(int* nums, int numsSize, int k) {
    int count =0;
    for(int i = 0;i<numsSize-1;i++)
    {
        for(int j = i+1;j<numsSize;j++)
        {
            if(k == abs(nums[i] - nums[j]) ) count++;
        }
    }
    return count;
}
int main()
{
    int array[] = { 1,3 }  , k =3;
    int size = sizeof(array) / sizeof(array[0]);
    
    printf("\n count = %d",countKDifference(array,size,k));
    return 0;
}