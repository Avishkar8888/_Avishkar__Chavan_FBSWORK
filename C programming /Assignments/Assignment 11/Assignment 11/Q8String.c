#include <stdio.h>

void  main() {
    char str[100];
    int flag=0;
    printf("Enter a string: ");
    gets(str); 
    int i = 0; 
    while (str[i] != '\0') {
        if (str[i] == ' '  ) {
        	 flag=1;
        
        }
        	 flag++;
        i++;
    }
    printf("Number of words: %d\n", flag);

   
}
