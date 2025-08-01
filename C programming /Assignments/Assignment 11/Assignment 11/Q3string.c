#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int n;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the index you want to remove: ");
    scanf("%d", &n);
	int len=strlen(str);
	if(n<0 || n>=len){
     printf("enter  index  from 0 to  %d.", len - 1);
	}
	else{
	
	for(int i=n;i<len;i++){
		str[i]=str[i+1];
	}
    printf("String after removing character at index %d: %s\n", n, str);
}


}
