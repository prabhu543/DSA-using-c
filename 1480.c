#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
	int* array = (int*)malloc(numsSize * sizeof(int));

	for(int i = 0; i<numsSize; i++)
	{
		int sum =0;
		for(int j = 0; j<=i; j++)
		{
			sum += nums[j];
		}
		array[i] = sum;
	}

	*returnSize = numsSize;
	return array;
}

int main()
{
	int nums[] = { 3,1,2,10,1 } ;
	int n = sizeof(nums) / sizeof(nums[0]);
	int returnSize= 0;

	int* array = runningSum(nums,n,&returnSize);

	for(int i = 0; i<n; i++)
		printf("\n %d",array[i]);

	free(array);
}