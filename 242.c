#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int compare(const void *a, const void *b)
{
	return (*(char*)a - *(char*)b);
}
bool isAnagram(char* s, char* t) {
    int sLen = strlen(s); 
    int tLen = strlen(t);
    qsort(s,sLen,sizeof(char),compare);
	qsort(t,tLen,sizeof(char),compare);
	
	if(sLen != tLen)
	return false;
	else
	for(int i = 0; s[i] !='\0' ; i++)
	{
		if(s[i] != t[i])
		{
			return false;
		}
	}
	return true;

}
int main()
{
	char s[] = "a";
	char need[] = "ab";

	
	if(isAnagram(s,need))
	printf("\n it is Anagram");
	else
	printf("\n sorry bro cant");
	
}