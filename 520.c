#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
bool detectCapitalUse(char* word) {
     int len =0, wordcount =0;
    
    while(word[len] != '\0') // not a bull character
    {
        if(isupper(word[len])) // to check uppercase  using ctype.h library
        wordcount++; // counting uppercase letters
        
        len++;
    }
    if(wordcount == 0 || wordcount == len) // conditiion for both lowercase or uppercase
    return true;
    else
    if(wordcount == 1 && isupper(word[0])) // condition for only 1st uppercase 
    return true;
    else
    return false; // else false 
}
int main()
{
    char s[] = "AmericA";
    
   if(detectCapitalUse(s))
   printf("\n true");
   else
   printf("\n false");
}