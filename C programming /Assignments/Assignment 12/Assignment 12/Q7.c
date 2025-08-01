#include <stdio.h>
#include <stdlib.h>


void  main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));
    int *c = (int *)malloc(n * sizeof(int));

    printf("Enter first array: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter second array: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    addArrays(a, b, c, n);
    free(a); free(b); free(c);
   
}
void addArrays(int *a, int *b, int *c, int n) {
    for (int i = 0; i < n; i++)
        c[i] = a[i] + b[i];
    printf("Sum array: ");
    for (int i = 0; i < n; i++) printf("%d ", c[i]);
    printf("\n");
}
