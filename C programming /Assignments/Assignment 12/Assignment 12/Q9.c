#include <stdio.h>
#include <stdlib.h>
void  main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    reverseArray(arr, n);
    free(arr);
    
}
void reverseArray(int *arr, int n) {
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) printf("%d ", arr[i]);
    printf("\n");
}