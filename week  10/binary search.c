#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid; 
        }
        else if (arr[mid] < key) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int n, i, key;
    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);
    if (result == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at position %d\n", result + 1);
    }

    return 0;
}

