#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int* array = (int*)malloc(2*sizeof(int));

    for(int i =0 ;i<numsSize-1 ; i++)
   {
       for(int j = i+1 ; j<numsSize ; j++)
       {
           if(nums[i] + nums[j] == target)
           {
               array[0] = i;
               array[1] = j;
               *returnSize = 2;
                return array;
           }
       }
   }
   *returnSize = 0;
    return array;
}

int main()
{
   int nums[] = { 2,7,11,15 };
   int target = 9;
   int n = sizeof(nums) / sizeof(nums[0]);
   int returnSize;
   
   int* array = twoSum(nums,n,target,&returnSize);
   
   for(int i =0 ;i<returnSize ; i++)
   printf("\n %d",array[i]);
   
   free(array);
}