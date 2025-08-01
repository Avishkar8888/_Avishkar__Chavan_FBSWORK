//#include <stdio.h>
//void main() {
//    char str[100];
//    char ch;
//    int  count=0;
//
//    printf("Enter the string: ");
//    scanf("%s", str);
//
//    printf("Enter the character you want to search: ");
//    scanf(" %c", &ch); 
//   int i=0;
//    while (str[i] != '\0') {
//        if (str[i] == ch) {
//            printf("Character '%c' is found at position %d\n", ch, i);
//            count  = 1;
//            
//        }
//        i++;
//    }
//    if(count==0){
//    	printf("Character %c not present in above string",ch);
//	}
//      
//}





#include <stdio.h>
void main() {
    char str[100];
    char ch;
    int count = 0;

    printf("Enter the String: ");
    scanf("%s", str);

    printf("Enter the character you want to search: ");
    scanf(" %c", &ch);  
    
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) 
		{
            printf("Character '%c' is found at position %d\n", ch, i);
            count = 1;
        }
        i++;
    }

    if (count == 0)
        printf("Character not found.\n");
}










