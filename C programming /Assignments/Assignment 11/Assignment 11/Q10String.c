#include<stdio.h>
#include<string.h>
void main(){
	char str[100];
	printf("Enter the string : ");
	gets(str);
	char org[100];
	strcmp(strrev(str),strcpy(org,str))==0 ? printf("Palindrome"): printf("not palindrome");
}

