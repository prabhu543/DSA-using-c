
#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    int n = num;
    while(num > 0)
    {
        int rem = num % 10;
        if( n % rem == 0 )
        {
            count ++;
        }
        num = num / 10;
    }
    return count;
}

int main() {
    int number = 1248;
    int result = countDigits(number);
    printf("Result: %d\n", result);
    return 0;
}