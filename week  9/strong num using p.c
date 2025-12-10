#include <stdio.h>

int factorial(int *d) {
    int i, fact = 1;
    for (i = 1; i <= *d; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int *numPtr) {
    int n = *numPtr;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += factorial(&digit);  
        n /= 10;
    }

    return (sum == *numPtr);
}

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrong(&num)) {          
        printf("%d is a Strong number\n", num);
    } else {
        printf("%d is not a Strong number\n", num);
    }

    return 0;
}

