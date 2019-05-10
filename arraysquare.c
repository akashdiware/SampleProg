#include<stdio.h>
int main(){
	long int arr[] = {10,20,34,35,6,75,43,67,65,45}, i=0, len;
	len = sizeof(arr)/sizeof(int);
	for(i=0;i<len;i++){
		arr[i] = arr[i] * arr[i];
		printf("%d ",arr[i]);
	}
	return 0;
}
