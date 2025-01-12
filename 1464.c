#include <stdio.h>

int maxProduct(int* nums, int numsSize) {
    int prod =0;
    int Maxprod =0;
    for(int i = 0;i<numsSize-1;i++)
    {
        for(int j = i+1 ;j<numsSize;j++)
        {
            prod = (nums[i] - 1) * (nums[j] - 1) ;
            if(prod > Maxprod) Maxprod = prod;
        }
    }
    return (Maxprod) ;
}

int main()
{
    int array [] = { 3,4,5,2 };
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n max product : %d",maxProduct(array,n));
    
}