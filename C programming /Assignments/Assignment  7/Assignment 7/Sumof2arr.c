#include <stdio.h>

int main() {
    int arr[5], brr[5], crr[5];
    int i;
    printf("Enter 5 elements for first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }    printf("Enter 5 elements for second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &brr[i]);
    }
    for(i = 0; i < 5; i++) {
        crr[i] = arr[i] + brr[i];
    }
    printf("Resultant array after addition:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", crr[i]);
    }

}
