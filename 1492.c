
#include <stdio.h>
int kthFactor(int n, int k) {
    int j =0 ;
    for(int i = 1;i<=n ;i++)
    {   
        if(n % i == 0)
        {
            j++;
            if( j == k)
                return i;
        }
    }
        return -1;
}

int main()
{
    int n =12,k = 6;
    int result = kthFactor(n,k);
    printf("%d",result);
    return 0;
}