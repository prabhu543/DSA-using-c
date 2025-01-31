#include <stdio.h>
#include <string.h>

int finalValueAfterOperations(char** operations, int operationsSize) {
    int count =0;
    for(int i = 0;i<operationsSize;i++)
    {
        if(strcmp(operations[i],"X++") == 0|| strcmp(operations[i],"++X") == 0) count++;
        else
        count--;
    }
    return count;
}

int main()
{
    char* s[] = { "--X","X++","X++" };
    int n = sizeof(s) / sizeof(s[0]);
    
    printf("\n %d",finalValueAfterOperations(s,n));
}