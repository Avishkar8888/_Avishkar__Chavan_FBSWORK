#include <stdio.h>
void main() {
    char a[50] = "Good ";
    char b[] = "Morning!";
    mystrncat(a, b, 4);
    printf("After n-concat: %s\n", a);
    
}

void mystrncat(char *dest, const char *src, int n) {
    while (*dest) dest++;
    while (n-- && *src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}
