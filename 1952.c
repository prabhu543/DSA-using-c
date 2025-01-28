#include <stdio.h>
#include <stdbool.h>
bool isThree(int n) {
    int count = 1;
    if(n <=3 ) return false;
    else
    for(int i = n ; i>=2 ; i--)
    {
        if(n % i == 0) count++;
        if(count>=4 ) return false;
    }
    
    return (count == 3);
}

int main()
{
    int n = ;
    if(isThree(n))
        printf("\n true");
    else
    printf("\n false");
}