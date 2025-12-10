#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i= = 0; i <n; i++) 
        scanf("%d", &arr[i]);
    

    reverseArray(arr, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
    
}

