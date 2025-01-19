#include <stdio.h>
int countEven(int num) {
    int count = 0;
    int sum = 0;
	for(int i = num; i > 0; i-- )
	{
		int j = i;
		sum = 0;
		while(j > 0)
		{
			int rem = j % 10;
			sum += rem;
			j /= 10;
		}
		
		if(sum % 2 == 0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int num =30;
	
	printf("\n count :  %d",countEven(num));
}