#include <stdio.h>
#include <stdlib.h>



void  main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));
    int *merge = (int *)malloc(2 * n * sizeof(int));

    printf("Enter first array: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter second array: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    mergeArrays(a, b, merge, n);
    free(a); free(b); free(merge);
   
}
void mergeArrays(int *a, int *b, int *merge, int n) {
    for (int i = 0; i < n; i++) {
        merge[i] = a[i];
        merge[n + i] = b[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < 2 * n; i++) printf("%d ", merge[i]);
    printf("\n");
}