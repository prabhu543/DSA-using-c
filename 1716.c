#include <stdio.h>
int totalMoney(int n) {
    int i =0;
    int count = 0;
    int sum = 0;
    while(1)
    {
        for(int j =i+1;j<=i+7;j++)
        {
            count++;
            sum += j;
            if(count == n) return sum;
        }
        i++;
    }
}
void main()
{
    int n = 10;
    printf("\n total Money =  %d",totalMoney(n));
}