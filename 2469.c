#include <stdio.h>
#include <stdlib.h>
double* convertTemperature(double celsius, int* returnSize) {
    double* array = (double*) malloc(2*sizeof(double));
    
    array[0] = celsius + 273.15;
    array[1] = (celsius * 1.80) + 32.00;
    *returnSize = 2;
    return array;
}

int main()
{
    double num = 36.5;
    int returnSize ;
    double* array = convertTemperature(num,&returnSize);
    
    
    for(int i = 0;i<returnSize;i++)
    printf("\n %f",array[i]);
    
    free(array);
}