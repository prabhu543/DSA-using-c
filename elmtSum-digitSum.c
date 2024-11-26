
#include <stdio.h>
#include <stdlib.h>
int differenceOfSum(int* nums, int numsSize) {
    int x = 0 ,y = 0;
    
    for(int i = 0 ; i<numsSize ; i++)
    {
        x += nums[i];
        int num = nums[i];
        while(num > 0 )
        {
            int rem = num % 10;
            y += rem;
            num /= 10;
        }
    }
    return (abs(x - y));
}

int main()
{
    int array[] = {1,15,6,3};
    int n = sizeof(array) / sizeof(array[0]);
    
    int result = differenceOfSum(array , n);
    
    printf("final answer:%d",result);
}