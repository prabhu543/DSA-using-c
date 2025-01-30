#include <stdio.h>
#include <string.h>
void reverseString(char* s, int left,int right) {
    
    while(left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        right--;
        left++;
    }
}

char* reverseWords(char* s) {
    int n = strlen(s);
    int start = 0;
    
    for(int i =0;i<=n ; i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            reverseString(s,start,i-1);
            start = i+1;
        }
    }
    return s;
}
int main()
{
    char array[] = "Let's take LeetCode contest";
    printf("\n %s",array);
    printf("\n %s",reverseWords(array));
    
}