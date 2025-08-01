
void  main() {
    char a[] = "apple";
    char b[] = "apricot";
    printf("Compare result: %d\n", mystrcmp(a, b));
  
}

int mystrcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}