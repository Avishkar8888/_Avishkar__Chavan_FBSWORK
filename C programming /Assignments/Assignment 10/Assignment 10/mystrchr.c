#include <stdio.h>

void  main() {
    char str[] = "Hello World";
    char *result = mystrchr(str, 'o');
    if (result)
        printf("First occurrence: %s\n", result);
    else
        printf("Character not found\n");
  
}

char* mystrchr(const char *str, int ch) {
    while (*str) {
        if (*str == ch) return (char*)str;
        str++;
    }
    return NULL;
}
