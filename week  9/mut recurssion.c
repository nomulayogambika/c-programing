include <stdio.h>

int multiply(int a, int b) {
    if (b == 0) {
        return 0;                  
    } else if (b > 0) {
        return a + multiply(a, b - 1);
    } else {                       
        return -multiply(a, -b);
    }
}

int main(void) {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Product = %d\n", multiply(x, y));

    return 0;
}

