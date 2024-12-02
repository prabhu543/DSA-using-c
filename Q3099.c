
#include <stdio.h>
int sumOfTheDigitsOfHarshadNumber(int x) {
    int n = x;
    int sum = 0;
    while(n > 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    if((sum != 0) && (x % sum == 0 ))
        return sum;
    else
        return -1;
}

int main()
{
    int x = 21;
    int sum = sumOfTheDigitsOfHarshadNumber(x);
    printf("%d",sum);
}