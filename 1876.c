#include <stdio.h>
#include <string.h>

int countGoodSubstrings(char* s) {
    int sCount = strlen(s);
    int count = 0;
    
    for(int i = 0 ;i<sCount-2 ; i++)
        if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2] ) 
            count++;
            
    return count;
}

int main()
{
    char s[]  = "xyzzaz";
    
    printf("\n %d",countGoodSubstrings(s));
}