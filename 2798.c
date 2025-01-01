#include <stdio.h>

int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int count = 0;
    
    for(int i = 0;i<hoursSize;i++)
    {
        if(hours[i] >= target) count++;
    }
    return count;
}

int main()
{
    int arr[] =  {0,1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;
    
    printf("\n count =%d",numberOfEmployeesWhoMetTarget(arr , n,target));

    return 0;
}