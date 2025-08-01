#include <stdio.h>

void  main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, k = 0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[k++] = arr1[i];
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[k++] = arr2[i];
}
printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

}
