#include <stdio.h>

void  main() {
    int arr[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nAlternate elements in the array:\n");
    for(i = 0; i < n; i =i+ 2) {
        printf("%d ", arr[i]);
    }

}
