#include <stdio.h>
int numJewelsInStones(char* jewels, char* stones) {
    int count =0;
    for(int i =0;jewels[i] != '\0';i++)
    {
        for(int j = 0 ; stones[j] != '\0';j++)
        {
            if(jewels[i] == stones[j]) count++;
        }
    }
    return count;
}
int main()
{
    char s[] = "aA" , t[] = "aAAbbbb";
    
    printf("\n %d",numJewelsInStones(s,t));
}