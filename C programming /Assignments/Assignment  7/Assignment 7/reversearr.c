#include <stdio.h>

void  main() {
    int arr[100], n, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
