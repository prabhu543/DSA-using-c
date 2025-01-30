#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, mid;
    
    while (left <= right) {
        mid = left + (right - left) / 2; // Avoids overflow

        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            left = mid + 1; // Search right half
        } else {
            right = mid - 1; // Search left half
        }
    }
    
    return left; // Insert position
}

int main() {
    int array[] = {1, 3, 5, 6};
    int target = 4;
    int n = sizeof(array) / sizeof(array[0]);

    printf("Index: %d\n", searchInsert(array, n, target)); // Output: 2

    return 0;
}
