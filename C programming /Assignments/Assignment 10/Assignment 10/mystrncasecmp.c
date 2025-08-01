#include <stdio.h>


int main() {
    char a[] = "Avishkar";
    char b[] = "avISH";
    printf("Case-insensitive compare (5 chars): %d\n", mystrncasecmp(a, b, 5));
 
}

int mystrncasecmp(const char *s1, const char *s2, int n) {
    while (n-- && *s1 && *s2) {
        char c1 = tolower(*s1);
        char c2 = tolower(*s2);
        if (c1 != c2) return c1 - c2;
        s1++; s2++;
    }
    if (n >= 0) return tolower(*s1) - tolower(*s2);
    return 0;
}
