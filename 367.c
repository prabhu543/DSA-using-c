#include <stdio.h>
#include <stdbool.h>
bool isPerfectSquare(int num) {
    long power = 1;
    for(long i = 1;num >= power;i++)
    {
        power = i * i ;
        if(num == power) 
        return true;
    }
    return false;
}
int main()
{
    long num = 2147483647;
    if(isPerfectSquare(num)) printf("\n true ");
    else
    printf("\n false ");
}