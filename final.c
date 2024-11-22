
#include <stdio.h>

int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    for (int i = 0; i < k; i++) {
        int small = nums[0];
        int index = 0;

        for (int j = 1; j < numsSize; j++) {
            if (nums[j] < small) {
                small = nums[j];
                index = j;
            }
        }

        nums[index] = small * multiplier;
    }

    *returnSize = numsSize;
    return nums;
}



int main()
{
    int array[] = {2,1,3,5,6};
    int n =5;
    int k = 5;
    int multi = 2;
    
    getFinalState(array,n,k,multi,&n);
    
    printf("final array :");
    for(int i = 0;i<n ; i++) printf(" %d",array[i]);
}