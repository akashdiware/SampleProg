#include<stdio.h>
int main(){
	int arr[] = {23,45,34,35,6,75,43,67,65,45}, i=0, sum=0, len;
	len = sizeof(arr)/sizeof(int);
	for(i=0;i<len;i=i+2){
		sum=sum+arr[i];
	}
	printf("SUM: %d",sum);
	return 0;
}
