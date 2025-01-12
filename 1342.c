#include <stdio.h>
int numberOfSteps(int num) {
    int count =0;
    while(num != 0)
    {
        if(num % 2 == 0) 
            num /=2; 
        else
            num -= 1;
        count++;
    }
    return count;
}

int main()
{
    int num = 8;

    printf("\n steps =%d",numberOfSteps(num));
}