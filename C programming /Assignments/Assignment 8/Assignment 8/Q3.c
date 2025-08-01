#include <stdio.h>
int findSum(int arr[], int size);

void main() {
    int arr[100], size, i, sum;
    printf("Enter number of elements in array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sum = findSum(arr, size);
    printf("Sum of all elements = %d\n", sum);

}


int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum =sum+ arr[i];
    }
    return sum;
}
