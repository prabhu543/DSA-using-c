#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int firstDigit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int lastDigit(int n) {
    return n % 10;
}

int countBeautifulPairs(int* nums, int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            int first = firstDigit(nums[i]);
            int last = lastDigit(nums[j]);
            if (gcd(first, last) == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int array[] = { 31, 25, 72, 79, 74 };
    int n = sizeof(array) / sizeof(array[0]);

    printf("Count: %d\n", countBeautifulPairs(array, n));

    return 0;
}
