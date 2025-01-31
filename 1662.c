#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char str1[1000] = "" , str2[1000] = "";
    
    for(int i= 0;i< word1Size ; i++)
    {
        strcat(str1,word1[i]);
    }
    
    for(int i= 0;i< word2Size ; i++)
    {
        strcat(str2,word2[i]);
    }
    return (strcmp(str1,str2) == 0);
}

int main()
{
    char *s[] = { "abc", "defg" };
    char *t[] = { "abcddefg" };
    int sCount = sizeof(s) / sizeof(s[0]);
    int tCount = sizeof(t) / sizeof(t[0]);
    
    
    if(arrayStringsAreEqual(s,sCount,t,tCount))
    printf("\n true its equal");
    else
    printf("\n false its not equal");
}