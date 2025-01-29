#include <stdio.h>
#include <stdlib.h>
int compare(const void *a , const void *b)
{
    return (*(int*)a - *(int*)b);
}
int minimumSum(int num) {
    int digit[4];
    int i =0;
    while(num > 0)
    {
        digit[i++] = num  % 10;
        num /= 10;
    }

    qsort(digit, 4,sizeof(int),compare);
    
    int num1 = digit[0] * 10 + digit[2];
    int num2 = digit[1] * 10 + digit[3];
    
    return (num1 + num2);
}
int main()
{
    int num = 4009;
    
    printf("\n %d",minimumSum(num));
}