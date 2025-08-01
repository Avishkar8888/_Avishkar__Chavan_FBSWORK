#include <stdio.h>
#include<string.h>
void  main() {
    char str[100], res[100];
    int j = 0;

    printf("Enter a string: ");
    gets(str); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2!= 0) {
            res[j] = str[i];
            j++;
        }
    }
	res[j] = '\0';
    printf("Result: %s\n", res);

}
