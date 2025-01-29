#include <stdio.h>
int tribonacci(int n) {
    long t0=0,t1=1,t2=1,t3;
    
    if(n == 0) return 0;
    else if(n == 1 || n == 2) return 1;
    else
    for(int i = 3;i<=n;i++)
    {
        t3 = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = t3; 
    }
    return t2;
}
int main()
{
    int n = 25;
    
    printf("\n result : %d",tribonacci(n));
}