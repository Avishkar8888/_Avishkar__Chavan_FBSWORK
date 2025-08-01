#include <stdio.h>
#include <stdlib.h>

void  main() {
    int n, *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Alternate elements: ");
    for (int i = 0; i < n; i += 2) printf("%d ", arr[i]);

    printf("\n");
    free(arr);
   
}
