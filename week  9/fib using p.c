#include <stdio.h>

void fibonacci(int n, int *a, int *b) {
    int i;
    int *p = a;
    int *q = b;
    int next;

    printf("%d %d ", *p, *q);  

    for (i = 3; i <= n; i++) {
        next = *p + *q;
        printf("%d ", next);
        *p = *q;
        *q = next;
    }
}

int main(void) {
    int n;
    int first = 0, second = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive integer\n");
        return 0;
    } else if (n == 1) {
        printf("0\n");
        return 0;
    }

    fibonacci(n, &first, &second);

    return 0;
}

