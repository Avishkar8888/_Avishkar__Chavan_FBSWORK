#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100] = "HELLO";
    char str4[100] = "   Trim this   ";
    char temp[100];

    printf("Original str1: %s\n", str1);
    printf("Original str2: %s\n", str2);

    // 1. strlen
    printf("Length of str1: %zu\n", strlen(str1));

    // 2. strcpy
    strcpy(temp, str1);
    printf("Copy of str1 to temp: %s\n", temp);

    // 3. strncpy
    strncpy(temp, str2, 3);
    temp[3] = '\0';
    printf("First 3 chars of str2 copied to temp: %s\n", temp);

    // 4. strcat
    strcat(str1, str2);
    printf("Concatenated str1 and str2: %s\n", str1);

    // 5. strncat
    strncat(str1, "123456", 3);
    printf("str1 after strncat with 3 chars: %s\n", str1);

    // 6. strcmp
    printf("strcmp(str1, str2): %d\n", strcmp(str1, str2));

    // 7. strncmp
    printf("strncmp(str1, str2, 3): %d\n", strncmp(str1, str2, 3));

    // 8. strcasecmp (POSIX, not standard C, may require compilation with GCC)
    printf("strcasecmp(str1, str3): %d\n", strcasecmp(str1, str3));

    // 9. strchr
    char *ptr = strchr(str1, 'W');
    printf("First occurrence of 'W' in str1: %s\n", ptr);

    // 10. strrchr
    ptr = strrchr(str1, 'l');
    printf("Last occurrence of 'l' in str1: %s\n", ptr);

    // 11. strstr
    ptr = strstr(str1, "loWo");
    printf("Substring 'loWo' found in str1: %s\n", ptr);

    // 12. strdup
    char *dup = strdup(str2);
    printf("Duplicate of str2: %s\n", dup);

    // 13. strspn
    printf("Length of initial part of str1 matching 'He': %zu\n", strspn(str1, "He"));

    // 14. strcspn
    printf("Length of str1 until any of 'aeiou': %zu\n", strcspn(str1, "aeiou"));

    // 15. strtok
    char str5[] = "This,is,a,test";
    char *token = strtok(str5, ",");
    printf("Tokens:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    // 16. memset
    memset(temp, '-', 5);
    temp[5] = '\0';
    printf("Memset temp with '-': %s\n", temp);

    // 17. memcpy
    char src[] = "CopyThis";
    char dest[50];
    memcpy(dest, src, strlen(src)+1);
    printf("Memcpy result: %s\n", dest);

    // 18. memcmp
    printf("memcmp(str1, str2, 3): %d\n", memcmp(str1, str2, 3));

    // 19. strrev (Not in standard C, so we do it manually)
    char rev[100] = "reverse";
    int len = strlen(rev);
    for (int i = 0; i < len / 2; i++) {
        char t = rev[i];
        rev[i] = rev[len - 1 - i];
        rev[len - 1 - i] = t;
    }
    printf("Reversed string: %s\n", rev);

    // 20. toupper (with loop)
    char caseStr[] = "Hello";
    for (int i = 0; caseStr[i]; i++) {
        caseStr[i] = toupper(caseStr[i]);
    }
    printf("Uppercase: %s\n", caseStr);

    // 21. tolower (with loop)
    for (int i = 0; caseStr[i]; i++) {
        caseStr[i] = tolower(caseStr[i]);
    }
    printf("Lowercase: %s\n", caseStr);

    return 0;
}
