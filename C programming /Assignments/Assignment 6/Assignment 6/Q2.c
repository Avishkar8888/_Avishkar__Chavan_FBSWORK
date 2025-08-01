#include <stdio.h>

void printTable(int num);

void main() {
    int number;

    printf("Enter a number to print its table: ");
    scanf("%d", &number);
    printTable(number);

}
void printTable(int num) {
    printf("Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
