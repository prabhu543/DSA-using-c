#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* ans = (int*)malloc(2 * numsSize * sizeof(int));
    
    for(int i = 0;i< numsSize; i++)
    {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    *returnSize = 2*numsSize;
    return ans;
}

int main() {
    int nums[] = {1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* result = getConcatenation(nums, numsSize, &returnSize);

   for (int i = 0; i < returnSize; i++)
            printf("%d ", result[i]);
    free(result); // Free allocated memory
}
