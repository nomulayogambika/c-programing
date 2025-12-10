#include <stdio.h>

long long factorial(int n) {
    if (n < 0) {
        return -1;                 
    } else if (n == 0 || n == 1) {
        return 1;                  
    } else {
        return n * factorial(n - 1); 
    }
}

int main(void) {
    int n;
    long long fact;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    fact = factorial(n);

    if (fact == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
