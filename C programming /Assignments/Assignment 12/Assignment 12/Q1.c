#include <stdio.h>
#include <stdlib.h>

void  main() {
    int n, *arr, i, min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    min = max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    
    printf("Minimum = %d, Maximum = %d\n", min, max);
    free(arr);
}
