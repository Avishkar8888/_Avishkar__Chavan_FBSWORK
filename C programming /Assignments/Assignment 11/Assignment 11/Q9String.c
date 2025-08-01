#include <stdio.h>
#include<conio.h>
void main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    
    printf("Enter first string: ");
    gets(str1);
	  
   
    printf("Enter second string: ");
    gets(str2);
    
    int i=0;
    while (str1[i] != '\0') {
        len1++;
        i++;
    }
    i = 0; 
    while (str2[i] != '\0') {
        len2++;
        i++;
    }
	if (len1 > len2) {
        printf("Larger string is: %s\n", str1);
    } else if (len2 > len1) {
        printf("Larger string is: %s\n", str2);
    } else {
        printf("Both strings are of equal length.\n");
    }
}
