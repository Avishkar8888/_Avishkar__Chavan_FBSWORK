#include<stdio.h>
int findmaxnum(int[] ,int );
int findminnum(int[],int);
void main(){
	int arr[100];
	int n;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	printf("Enter the %d number \n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		int max = findmaxnum(arr,n);
        printf("Maximum number is %d\n",max);
     	int min = findminnum(arr,n);
	    printf("Minimum number is %d",min);
	
}
int findmaxnum(int arr[],int size ){
          int max=arr[0];
          for(int i=1;i<size;i++){
          	if(arr[i]>max)
          	max=arr[i];
		  }
		  return max;
}
int findminnum(int arr[],int size ){
          int min=arr[0];
          for(int i=1;i>size;i++){
          	if(arr[i]>min)
          	min=arr[i];
		  }
		  return min;
}