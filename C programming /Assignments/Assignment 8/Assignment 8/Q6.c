#include <stdio.h>
int isPrime(int num);
void printPrimeNumbers(int arr[], int size);

void  main() {
    int arr[100], size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printPrimeNumbers(arr, size);

}
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void printPrimeNumbers(int arr[], int size) {
    printf("\nPrime numbers in the array:\n");
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
