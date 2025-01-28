#include <stdio.h>

int pivotInteger(int n) {
    if(n == 1)
        return 1;
    else
        for(int j = 1;j<=n;j++)
        {
            int sum1 = 0,sum2 =0;
            
            sum1 = j * (j+1) / 2;
            
            for(int k = j;k<=n;k++)
            {
                sum2 += k;
            }
            
            if(sum1 == sum2) 
                return j;
        }
    return -1;
}
int main()
{
    int n = 8;
    printf("\n %d",pivotInteger(n));
}