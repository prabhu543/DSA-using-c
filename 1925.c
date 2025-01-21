#include <stdio.h>
#include <math.h>
int countTriples(int n) {
    int count = 0;
    for(int k = 1 ;k<=n;k++) // its not satisfy time complexity
    {
        for(int j = 1;j<=n;j++)
        {
            for(int i = 1; i<=n;i++)
            {
                if((pow(i,2) + pow(j,2)) == pow(k,2))
                {
                    count++;
                }
            }
        }
    }
    return count;
}
int main()
{
    int n = 5;
    
    printf("\n count = %d",countTriples(n));
}