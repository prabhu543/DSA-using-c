#include <stdio.h>
#include <stdlib.h>
int* distributeCandies(int candies, int num_people, int* returnSize) {
	int * array = (int *)malloc(num_people * sizeof(int));

	int n = 0;

	for (int i = 0; i < num_people; i++) array[i] = 0;

	while(1)
	{
		for(int i = 0 ; i<num_people ; i++)
		{
			if(candies > n)
			{
				array[i] += ++n;
				candies  -= n;
			}
			else
			{
				array[i] += candies;
				candies = 0;
			}

			if(candies == 0)
			{
				*returnSize = num_people;
				return array;
			}
		}
	}
}
void main()
{
	int candy  = 12, num = 4;
	int returnSize;
	int * array = distributeCandies(candy,num,&returnSize);
	printf("\n final array : ");
	for(int i = 0 ; i<returnSize ; i++)
		printf("\t %d",array[i]);


	free(array);
}