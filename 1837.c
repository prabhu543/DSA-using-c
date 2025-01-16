#include <stdio.h>
int sumBase(int n, int k) {
    int sum = 0;
    
    while(n != 0)
    {
        int rem = n % k;
        sum += rem;
        n = n / k;
    }
    return sum;
}
int main()
{
    int num = 34,k = 6;
    printf("\n sum = %d",sumBase(num,k));
}