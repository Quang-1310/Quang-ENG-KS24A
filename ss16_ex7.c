#include<stdio.h>
void ptr(int arr[]){
	int *ptr = arr;
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9 - 1 - i; j++){
			if(ptr[j] > ptr[j + 1]){
				int temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}	
	printf("Mang da duoc sap xep ");
	for(int i = 0; i < 9; i++){
		printf("%d ", arr[i]); 
	}
}
int main(){
	int arr[100] = {4,1,7,9,5,3,2,6,8};
	printf("Mang chua duoc sap xep ");
	for(int i = 0; i < 9; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	ptr(arr);		
	return 0;
}