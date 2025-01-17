#include <stdio.h>
int numberOfMatches(int n){
    int sum = 0;
    while(n != 1)
    {
        int k = n;
        if(n % 2 != 0) 
            n = (n-1) / 2;
        else
            n  = n/2;
        sum +=n; 
        n = k - n;
    }
    return sum;
}
int main()
{
    int n = 15;
    printf("\n sum =  %d",numberOfMatches(n));
}