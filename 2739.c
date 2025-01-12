#include <stdio.h>
int distanceTraveled(int mainTank, int additionalTank) {
    int count = 0;
    while(mainTank >=5 && additionalTank != 0)
    {
        mainTank -=  4; // mainTank = mainTank -5 , mainTank++;
        count++;
        additionalTank--;
    }
    return ((count * 5 + mainTank) * 10);
}
int main()
{
    int main =7,add=4;
    
    printf("\n distance Traveled = %d",distanceTraveled(main,add));
}