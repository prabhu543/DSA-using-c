#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x) {
    long num = x;
    
    long n =0;
    while(num > 0  && x % 10 != 0 )
    {
        long rem = num % 10;
        n = (n * 10) + rem;
        num /= 10;
    }
    return (x == n);
}
int main()
{
    long num1 = 1234567899;
    
    if(isPalindrome(num1))
    printf("\n %ld is a palindrome",num1);
    else
    printf("\n not palindome");
}