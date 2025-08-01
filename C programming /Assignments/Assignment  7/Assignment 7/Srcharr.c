#include<stdio.h>
void main(){
	int arr[50],n,num,i;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the %d number ",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("Enter the number you want to search");
	scanf("%d",&num);
	for(i=0;i<n;i++){
         if(arr[i]==num)
			printf("Number is found %d",num);
		
			
}
	printf("Number not found");

}