#include <stdio.h>

void  main() {
    char str[] = "helloWorld123";
    mystrupper(str);
    printf("Uppercase: %s\n", str);
  
}

void mystrupper(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

