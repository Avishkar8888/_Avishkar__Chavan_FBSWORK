#include <stdio.h>

void printNumbers();

void  main() {
    printNumbers();
}
void printNumbers() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}
