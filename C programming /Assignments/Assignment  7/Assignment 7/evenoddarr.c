#include<stdio.h>
void main(){
	int arr[50],n;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	printf("Enter %d number",n);
	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);

}
  printf("Even numbers in array are : ");
 for(int i=0;i<n;i++){
 	if(arr[i]%2==0){
 		printf("%d \n",arr[i]);
	 }
}
	  printf("Odd numbers in array are : ");
	 for(int i=0;i<n;i++){
	 
	 	if(arr[i]%2!=0){
 		printf(" %d ",arr[i]);
	 }
}
	

 }
 	 	
