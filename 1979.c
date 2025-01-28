#include <stdio.h>

int gcd(int a,int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findGCD(int* nums, int numsSize) 
{
    int num1 = nums[0], num2 = nums[0];
    
    for(int i = 1;i<numsSize;i++)
    {
        if(nums[i] > num2) num2 = nums[i];
        else
        if(nums[i] < num1) num1 = nums[i];
    }
    
    return gcd(num1,num2);
}

int main() {
    int array[] = { 3,3 };
    int n = sizeof(array) / sizeof(array[0]);
    
    int result = findGCD(array, n);
    printf("Result : %d\n", result);

    return 0;
}
