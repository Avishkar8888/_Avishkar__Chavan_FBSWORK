#include <stdio.h>
#include <string.h>

void  main() {
    char str[100];
    char temp;
    printf("Enter a string: ");
    scanf("%s", str); 

    int  len = strlen(str);  
    if (len > 1) {
        temp = str[0];          
        str[0] = str[len - 1];  
        str[len - 1] = temp; 
    }
    printf(" string is :%s ", str);

}
