
#include <stdio.h>
#include <math.h>
double myPow(double x, int n) {
    return (pow(x,n));
}


int main()
{
    double x = 2.00000,n = -2;
    double result = myPow(x,n);
    printf("%.5lf",result);
}