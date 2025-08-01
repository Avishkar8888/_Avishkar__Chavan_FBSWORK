#include <stdio.h>
void printAlternate(int arr[], int size);

void  main() {
    int arr[100], size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printAlternate(arr, size);
}

void printAlternate(int arr[], int size) {
    printf("\nAlternate elements in the array:\n");
    for (int i = 0; i < size; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
