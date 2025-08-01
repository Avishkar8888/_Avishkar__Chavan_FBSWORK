#include <stdio.h>

void  main() {
    char str[] = "HelloWORLD";
    mystrlower(str);
    printf("Lowercase: %s\n", str);
 
}

void mystrlower(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}
