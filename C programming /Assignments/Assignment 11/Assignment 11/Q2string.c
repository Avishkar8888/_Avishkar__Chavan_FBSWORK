//#include<stdio.h>
//
//void main(){
//   char str[50];
//   printf("Enter the String : ");
//   scanf("%s",str);
//	int i=0;
//	while(str[i]!='\0'){
//		if(str[i]=='a'){
//			str[i]='$';
//		}
//		i++;
//	}
//	printf("String is %s ",str);
//}


void main()
{
   char str[100];
   printf("Enter the string ");
   scanf("%s",str);
   int i=0;
   while(str[i]!='\0')
   {
   	    if(str[i]=='a'){
   	    	str[i]='$';
		   }
		   i++;
	}	
	printf("string is %s ",str);
}