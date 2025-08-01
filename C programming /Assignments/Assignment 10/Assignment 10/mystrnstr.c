#include <stdio.h>

int mystrncmp(const char *s1, const char *s2, int n);
int mystrlen(const char *str);
char* mystrnstr(const char *haystack, const char *needle, int n);

void  main() {
    char str[] = "This is a test string";
    char sub[] = "test";
    char *result = mystrnstr(str, sub, 15);
    if (result)
        printf("Found within limit: %s\n", result);
    else
        printf("Not Found in first 15 characters\n");
   
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

char* mystrnstr(const char *haystack, const char *needle, int n) {
    int len2 = mystrlen(needle);
    if (len2 == 0) return (char*)haystack;

    for (int i = 0; i <= n - len2 && haystack[i] != '\0'; i++) {
        if (mystrncmp(&haystack[i], needle, len2) == 0) {
            return (char*)&haystack[i];
        }
    }
    return NULL;
}
