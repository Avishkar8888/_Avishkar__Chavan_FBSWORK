#include <stdio.h>
void  main() {
    char source[] = "Hello, World!";
    char destination[50];

    mystrcpy(destination, source);

    printf("Copied string: %s\n", destination);
  
}
void mystrcpy(char *dest, const char *src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}