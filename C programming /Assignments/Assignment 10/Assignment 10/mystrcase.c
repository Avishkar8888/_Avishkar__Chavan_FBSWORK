#include <stdio.h>

void  main() {
    char a[] = "OpenAI";
    char b[] = "openai";
    printf("Case-insensitive compare: %d\n", mystrcasecmp(a, b));

}

int mystrcasecmp(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        char c1 = tolower(*s1);
        char c2 = tolower(*s2);
        if (c1 != c2) return c1 - c2;
        s1++; s2++;
    }
    return tolower(*s1) - tolower(*s2);
}
