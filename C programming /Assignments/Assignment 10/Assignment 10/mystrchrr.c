#include <stdio.h>

void main() {
    char str[] = "abcabcabc";
    char *result = mystrrchr(str, 'b');
    if (result)
        printf("Last occurrence: %s\n", result);
    else
        printf("Character not found\n");
   
}

char* mystrrchr(const char *str, int ch) {
    char *last = NULL;
    while (*str) {
        if (*str == ch) last = (char*)str;
        str++;
    }
    return last;
}
