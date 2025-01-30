#include <stdio.h>
#include <string.h>

// Function to find the first occurrence of needle in haystack
int strStr(char* haystack, char* needle) {
    int hLen = strlen(haystack);
    int nLen = strlen(needle);

    if (nLen == 0) return 0; // Edge case: empty needle is always found at index 0

    for (int i = 0; i <= hLen - nLen; i++) {
        int j;
        for (j = 0; j < nLen; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == nLen) { // Found needle
            return i;
        }
    }
    
    return -1; // Not found
}

int main() {
    char haystack1[] = "sadbutsad";
    char needle1[] = "sad";
    
    char haystack2[] = "leetcode";
    char needle2[] = "leeto";

    printf("Test 1: %d\n", strStr(haystack1, needle1)); // Output: 0
    printf("Test 2: %d\n", strStr(haystack2, needle2)); // Output: -1

    return 0;
}
