#include <stdio.h>
#include <limits.h>
int reverse(int x){
    int Number = 0;
    while(x != 0)
    {
        int rem = x % 10;
        
        // Check for overflow before multiplying by 10
        if (Number > INT_MAX/10 || Number < INT_MIN/10)
            return 0;
        
        // For the edge case when Number is equal to INT_MAX/10 or INT_MIN/10
        if (Number == INT_MAX/10 && rem > 7)
            return 0;
        if (Number == INT_MIN/10 && rem < -8)
            return 0;
        
        Number = Number * 10 + rem;
        x /= 10;
    }
    return Number;
}
int main()
{
    int num = 1534236469;
    printf("\n %d",reverse(num));
}
