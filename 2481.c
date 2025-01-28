#include <stdio.h>
int numberOfCuts(int n) {
    if(n == 1) return 0;
    else if(n % 2 == 0) return n/2;
    else return n;
}
int main()
{
    int n = 3;
    printf("\n cuts : %d",numberOfCuts(n));
}