#include <stdio.h>
#include <stdbool.h>
int reverse(int n)
{
    int num = 0;
    while(n > 0)
    {
        int rem = n % 10;
        num  = (num * 10) + rem;
        n /= 10;
    }
    return num;
}
bool isSameAfterReversals(int num) {
    int result = reverse(num);
    result = reverse(result);
    return (num == result);
}
int main()
{
    int num1 = 526;
    if(isSameAfterReversals(num1)) printf("\n true");
    else
    printf("\n false");
}