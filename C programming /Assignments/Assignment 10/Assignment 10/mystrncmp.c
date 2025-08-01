#include <stdio.h>

void main() {
    char a[] = "abcdef";
    char b[] = "abcxyz";
    printf("Compare first 3 chars: %d\n", mystrncmp(a, b, 3));
 
}

int mystrncmp(const char *s1, const char *s2, int n) {
    while (n-- && *s1 && *s2) {
        if (*s1 != *s2) return *s1 - *s2;
        s1++; s2++;
    }
    if (n >= 0) return *s1 - *s2;
    return 0;
}
