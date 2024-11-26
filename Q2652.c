
#include <stdio.h>

int sumOfMultiples(int n) {
    int count = 0;
    for (int i = 3; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            count += i;
        }
    }
    return count;
}

int main() {
    int number = 9;
    int result = sumOfMultiples(number);
    printf("Sum of multiples of 3, 5, or 7 up to %d: %d\n", number, result);
    return 0;
}