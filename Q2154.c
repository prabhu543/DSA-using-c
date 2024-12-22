
#include <stdio.h>

int findFinalValue(int* nums, int numsSize, int original) {
    int found = 1;
    while(found){
        found =0;
        for(int i =0;i<numsSize ;i++)
        {
            if(nums[i] == original)
            {
                original *= 2;
                found = 1;
                break;
            }
        }
    }
    return original;
}

int main()
{
    int arr[] = { 8,19,4,2,15,3} , org = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("original = %d",findFinalValue(arr , n,org));
    
}
