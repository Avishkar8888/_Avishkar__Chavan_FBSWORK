#include <stdio.h>
#include <stdlib.h>


int isPrime(int num);
void printPrimes(int *arr, int n);

void main() {
    int n, *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printPrimes(arr, n);

    free(arr);
  
}

// Function definitions after main

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void printPrimes(int *arr, int n) {
    printf("Prime numbers: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    }
    printf("\n");
}

