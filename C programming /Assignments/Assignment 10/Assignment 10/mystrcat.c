void  main() {
    char a[100] = "Hello ";
    char b[] = "World!";
    mystrcat(a, b);
    printf("Concatenated: %s\n", a);
  
}

void mystrcat(char *dest, const char *src) {
    while (*dest) dest++;
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}