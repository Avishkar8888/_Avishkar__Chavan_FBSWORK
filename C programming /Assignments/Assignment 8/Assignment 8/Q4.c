#include <stdio.h>
void findEven(int arr[], int size);
void findOdd(int arr[], int size);

void  main() {
    int arr[100], size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    findEven(arr, size);
    findOdd(arr, size);
}

void findEven(int arr[], int size) {
    printf("\nEven numbers in the array:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}
void findOdd(int arr[], int size) {
    printf("\nOdd numbers in the array:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}
