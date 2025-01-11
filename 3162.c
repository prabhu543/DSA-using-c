#include <stdio.h>

int numberOfPairs(int* nums1, int nums1Size, int* nums2, int nums2Size, int k) {
    int count =0;
    
    for(int i =0;i<nums1Size;i++)
    {
        for(int j = 0;j<nums2Size;j++)
        {
            if(nums1[i] % (nums2[j] *k)== 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr1[] = { 1,3,4 } , arr2[] = { 1,3,4 } , k =1;
    
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    
    
    
    printf("\n count =%d",numberOfPairs(arr1,n,arr2,m,k));
}