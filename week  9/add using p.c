#include <stdio.h>

void add(int *a, int *b, int *sum) {
    *sum = *a + *b;  
}

int main() {
    int n1, n2, res;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    add(&n1, &n2, &res); 

    printf("Sum = %d\n", res);

    return 0;
}

