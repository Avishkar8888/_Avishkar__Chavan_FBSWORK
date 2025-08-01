#include <stdio.h>

// Function declarations (prototypes)
int mystrncmp(const char *s1, const char *s2, int n);
int mystrlen(const char *str);
char* mystrstr(const char *haystack, const char *needle);

int main() {
    char str[] = "This is a test string";
    char sub[] = "test";
    char *result = mystrstr(str, sub);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not Found\n");
    return 0;
}

// Function definitions
int mystrncmp(const char *s1, const char *s2, int n) {
    while (n-- && *s1 && *s2) {
        if (*s1 != *s2) return *s1 - *s2;
        s1++; s2++;
    }
    return 0;
}

int mystrlen(const char *str) {
    int len = 0;
    while (*str++) len++;
    return len;
}

char* mystrstr(const char *haystack, const char *needle) {
    int len = mystrlen(needle);
    while (*haystack) {
        if (mystrncmp(haystack, needle, len) == 0) {
            return (char*)haystack;
        }
        haystack++;
    }
    return NULL;
}
