#include <stdio.h>
void reverseString(char* s, int sSize) {
    int left = 0, right = sSize -1;
    
    while(left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        right--;
        left++;
    }
}
int main()
{
    char array[] = { 'h', 'e', 'l', 'l', 'o' };
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("\n %s",array);
    reverseString(array,n);
    printf("\n %s",array);
    
}