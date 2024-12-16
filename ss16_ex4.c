#include<stdio.h>
void ptr(int arr[]){
	int *ptr = arr;
	for(int i = 0; i < 6; i++){
		printf("%d ", ptr[i]);
	}
}
int main(){
	int arr[100] = {1,2,3,4,5,6};
	ptr(arr);
	return 0;
}