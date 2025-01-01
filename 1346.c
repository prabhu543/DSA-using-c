#include <stdio.h>
#include <stdbool.h>

bool checkIfExist(int* arr, int arrSize) {
    for(int i = 0;i<arrSize-1;i++)
    {
        for(int j = i+1;j<arrSize;j++)
        {
           if(arr[i] == 2 * arr[j] || arr[j] == 2 *arr[i])
           return true;
        }
    }
    return (false);
}

int main()
{
    int arr[] = {7,1,14,11};
    int n = 4;
    
    if(checkIfExist(arr, n))
    printf("true");
    else
    printf("false");
    
}
