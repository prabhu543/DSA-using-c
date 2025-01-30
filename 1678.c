#include <stdio.h>
#include <stdlib.h>
char * interpret(char * command){
    char *t = (char*) malloc(500*sizeof(char));
    
    int i= 0;
    int j =0;
    while(command[i] != '\0')
    {
        if(command[i] == 'G')
        {
            t[j++] = 'G';
            i++;
        }
        else if(command[i] == '(' && command[i+1] == ')')
        {
            t[j++] = 'o';
            i += 2;
        }
        else if(command[i] == '(' && command[i+1] == 'a')
        {
            t[j++] = 'a';
            t[j++] = 'l';
            i += 4;
        }
    }
    t[j] = '\0';
    return t;
}
int main()
{
    char s[] = "(al)G(al)()()G";
    char* t = interpret(s);
    printf("\n %s",t);
}