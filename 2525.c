#include <stdio.h>
#include <math.h>

char* categorizeBox(int length, int width, int height, int mass) {
     unsigned long int volume = (unsigned long int)length * width * height;
    
    int flag = 0,found =0;
    if(mass >= 100) flag =1;
    if(volume >= pow(10,9) || length >= pow(10,4) || width >= pow(10,4) || height >= pow(10,4)) found = 1;
    
    if(flag == 1 && found == 1) return "Both";
    else if(flag == 1) return "Heavy" ;
    else if(found == 1)  return "Bulky" ;
    else return "Neither" ;
}
int main()
{
    long length = 1000, width = 35, height = 700, mass = 300;
    printf("%s",categorizeBox(length,width,height,mass));
}