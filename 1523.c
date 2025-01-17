#include <stdio.h>
int countOdds(int low, int high){
    int count = 0;
    for(int i = low;i<=high ; i++)
        if(i % 2 != 0) count++;
    return count;
}
int main()
{
    int low =0;
    int high = 10;
    
    printf("\n odd counts =  %d",countOdds(low,high));
}