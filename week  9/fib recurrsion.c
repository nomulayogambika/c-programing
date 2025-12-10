#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;            // base case 1
    } else if (n == 1) {
        return 1;            // base case 2
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
    }
}

int main(void) {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
