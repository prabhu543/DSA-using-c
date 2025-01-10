#include <stdio.h>
#include <limits.h>

int largestAltitude(int* gain, int gainSize) {
    int sum =0;
    int minElem= INT_MIN;
    for(int i = 0;i<gainSize ;i++)
    {
        if(minElem < sum) minElem = sum;
        sum += gain[i];
    }
    if(minElem < sum) minElem = sum;
    return minElem;
}

int main()
{
    int array[] = { 44,32,-9,52,23,-50,50,33,-84,47,-14,84,36,-62,37,81,-36,-85,-39,67,-63,64,-47,95,91,-40,65,67,92,-28,97,100,81 } ;
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n high altitude =  %d", largestAltitude(array,n));
}