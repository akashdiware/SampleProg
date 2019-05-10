#include<stdio.h>
int main(){
	int arr[] = {23,45,34,35,6,75,43,67,65,45}, i=0, len;
	len = sizeof(arr)/sizeof(int);
	for(i=0;i<len;i=i+2){
		printf("%d ",arr[i]);
	}
	return 0;
}
