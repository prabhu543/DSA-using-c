
#include <stdio.h>

int sumOfEncryptedInt(int* nums, int numsSize) {
    int sum = 0;
    
    for(int j = 0;j<numsSize;j++)
    {
        int count = 0;
        int large = 0 ;
        int n = nums[j];
        while(n > 0 )
        {
            int rem = n % 10;
            if(rem > large)
                large = rem;
            n = n / 10;
            count++;
        }
        
        int result = 0;
        for(int i = 0;i<count ; i++)
        {
            result = (result * 10) + large;
        }
        sum =sum + result;
    }
    
    return sum;
}

int main()
{
    int array[] = {10,21,31};
    int m = sizeof(array) / sizeof(array[0]);
    
    int sum = sumOfEncryptedInt(array , m);
    printf("\nfinal sum  = %d",sum);
}