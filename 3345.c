#include <stdio.h>
int smallestNumber(int n, int t) {
    for(int i = n ;;i++)
    {
        int product = 1;
        n = i;
        while(n > 0)
        {
            int rem = n % 10;
           product *=rem;
            n /= 10;
        }
        if(product % t == 0)
        {
            return i;
        }
    }
}
int main()
{
    int n = 45,t =4;
    printf("\n n =%d",smallestNumber(n,t));
}