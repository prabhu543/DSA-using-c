#include <stdio.h>
int smallestEvenMultiple(int n) {
    return (n % 2 == 0) ? n : n * 2;
}
int main()
{
    int num = 5;
    printf("\n product = %d",smallestEvenMultiple(num));
}