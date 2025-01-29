#include <stdio.h>
#include <stdlib.h>
int alternateDigitSum(int n) {
    int * array = (int*)malloc(20*sizeof(int));
    
    int i = 0;
    while(n  > 0)
    {
        int rem = n % 10;
        array[i++] = rem;
        n /= 10;
    }
    
    int sum = 0;
    int flag = 0;
    for(int j = i-1;j>=0;j--)
    {
        if(flag == 0) 
        {
            sum += array[j];
            flag =1;
        }
        else
        if(flag == 1)
        {
            sum -= array[j];
            flag =0;
        }
        
    }
    return sum;
}
int main()
{
    int num = 10;
   
    printf("\n sum : %d",alternateDigitSum(num));
}