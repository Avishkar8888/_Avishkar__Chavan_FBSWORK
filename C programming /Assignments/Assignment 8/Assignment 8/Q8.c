#include <stdio.h>
void mergeArrays(int a[], int size1, int b[], int size2, int c[]);

void  main() {
    int a[100], b[100], c[200];
    int size1, size2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &b[i]);
    }
    mergeArrays(a, size1, b, size2, c);
    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

}
void mergeArrays(int a[], int size1, int b[], int size2, int c[]) {
    int i, j;
    for (i = 0; i < size1; i++) {
        c[i] = a[i];
    }
    for (j = 0; j < size2; j++) {
        c[i + j] = b[j];
    }
}
