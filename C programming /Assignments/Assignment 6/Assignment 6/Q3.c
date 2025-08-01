#include <stdio.h>
int findSum(int start, int end);

void main() {
    int start, end, sum;
    printf("Enter start number: ");
    scanf("%d", &start);
    
    printf("Enter end number: ");
    scanf("%d", &end);
    sum = findSum(start, end);

    printf("Sum from %d to %d is: %d\n", start, end, sum);


}

int findSum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum = sum + i;
    }
    return sum;
}
