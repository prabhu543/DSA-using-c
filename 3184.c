#include <stdio.h>

int countCompleteDayPairs(int* hours, int hoursSize) {
    int count =0;
    for(int i = 0;i<hoursSize-1;i++)
    {
        for(int j =i+1;j<hoursSize;j++)
        {
            if((hours[i] + hours[j]) % 24 == 0) count++;
        }
    }
    return count;
}

int main()
{
    int array[] = { 12,12,30,24,24 };
    
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n output : %d",countCompleteDayPairs(array,n));
}