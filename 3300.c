#include <stdio.h>
#include <limits.h>

int minElement(int* nums, int numsSize) {
    int minElem = INT_MAX;
    
    for(int i = 0;i<numsSize;i++)
    {
        int sum =0;
        int num = nums[i];
        while(num > 0)
        {
            int rem = num % 10;
            sum += rem;
            num = num /10;
        }
        if(minElem > sum) minElem = sum;
    }
    
    return minElem;
}
int main()
{
    int array[] = {1,2,3,4 } ;
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n%d",minElement(array,n));
}