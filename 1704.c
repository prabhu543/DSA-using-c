#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool halvesAreAlike(char* s) {
    int n = strlen(s);
    char a[n/2 + 1]; // +1 to store the null terminator
    char b[n/2 + 1]; 

    // Copy first half to 'a'
    strncpy(a, s, n/2);
    a[n/2] = '\0'; // Manually add null terminator
    
    // Copy second half to 'b'
    strncpy(b, s + n/2, n/2);
    b[n/2] = '\0'; // Manually add null terminator

    printf("First half: %s\n", a);
    printf("Second half: %s\n", b);
    int num1 =0, num2 =0;
    for(int i = 0 ;i<= n/2;i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' 
        || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        num1++;
        
        if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' 
        || b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U')
        num2++;
    }
    return (num1 == num2);
}

int main() {
    char s[] = "textbook";
    
    
    
    if(halvesAreAlike(s)) printf("\n correct");
    else
    printf("\n false");
    return 0;
}
