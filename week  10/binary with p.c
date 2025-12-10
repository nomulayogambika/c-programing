#include <stdio.h>

int *binary_search(int *arr, int n, int key) {
    int *low  = arr;
    int *high = arr + (n - 1);

    while (low <= high) {
        int *mid = low + (high - low) / 2;

        if (*mid == key) {
            return mid;              // found
        } else if (key < *mid) {
            high = mid - 1;          // go left
        } else {
            low = mid + 1;           // go right
        }
    }
    return NULL;                     // not found
}

int main(void) {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    int *result = binary_search(arr, n, key);

    if (result != NULL) {
        printf("Found %d at index %ld\n", *result, result - arr);
    } else {
        printf("Not found\n");
    }

    return 0;
}

