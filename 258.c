#include <stdio.h>

int addDigits(int num) {
    int sum = num; 
    while(1)
    {
        int num = sum;
        sum = 0;
        while(num > 0)
        {
            int rem = num % 10;
            sum += rem;
            num /= 10;
        }
        if(sum < 10) return sum;
    }
}

int main()
{
    int sum = 38;
    
    printf("\n sum = %d",addDigits(sum));
}