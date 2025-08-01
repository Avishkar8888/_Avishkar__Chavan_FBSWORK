#include <stdio.h>
void addArrays(int a[], int b[], int c[], int size);

void  main() {
    int a[100], b[100], c[100], size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &b[i]);
    }
    addArrays(a, b, c, size);
    printf("Resultant array after addition:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

}
void addArrays(int a[], int b[], int c[], int size) {
    for (int i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }
}
