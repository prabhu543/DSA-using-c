#include <stdio.h>
#include <string.h>
int lengthOfLastWord(char* s) {
    int n = strlen(s)-1;

    while(n >= 0 && s[n] == ' ')    n--;
    
    int count =0;
    
    for(int i= n ;i>=0 && s[i] != ' ';i--)  count++;
    
    return count;
}
int main()
{
    char s[] = "Hello World";
    
    printf("\ncount: %d",lengthOfLastWord(s));
}