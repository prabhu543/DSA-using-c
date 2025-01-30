#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * defangIPaddr(char * address){
    char* t =(char*)malloc(50*sizeof(char)) ;
    int j =0;
    for(int i =0;address[i]!= '\0' ;i++)
    {
        if(address[i] == '.')
        {
            t[j++] = '[';
            t[j++] = '.';
            t[j++] = ']';
        }
        else
        t[j++] = address[i];
    }
    t[j] = '\0';
    return t;
}
int main()
{
    char s[] = "255.100.50.0";
    char* t = defangIPaddr(s);
    printf("\n %s",t);
    
    free(t);
}