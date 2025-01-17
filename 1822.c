#include <stdio.h>

int signFunc(int x) { 
    if (x % 2 ==  0) return 1; 
    else return -1; 
}
int arraySign(int* nums, int numsSize) {
    int count = 0;
    for(int i = 0;i<numsSize;i++)
    {
        if(nums[i] == 0) return 0;
        else
        if(nums[i] < 0) count++;
    }
    return signFunc(count);
}
int main()
{
    int array[] = { 9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24 };
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n product = %d",arraySign(array,n));
}