#include <stdio.h>
int findNumbers(int* nums, int numsSize) {
    int num =0;
    for(int i =0;i<numsSize;i++)
    {
        int count =0;
        while(nums[i] > 0)
        {
            int rem = nums[i] % 10;
            count++;
            nums[i] /= 10;
        }
        if(count % 2 == 0) num++;
    }
    return num;
}

int main()
{
    int array[] = { 12,345,2,6,7896 };
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n \n num = %d",findNumbers(array,n));
}