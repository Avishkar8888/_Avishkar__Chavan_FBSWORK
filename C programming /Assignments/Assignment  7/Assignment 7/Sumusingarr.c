#include<stdio.h>
void main(){
	int arr[50],n,sum=0;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	printf("Enter %d number",n);
	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	
		
		
	}
	printf("Addition of total number is %d  ",sum);
}