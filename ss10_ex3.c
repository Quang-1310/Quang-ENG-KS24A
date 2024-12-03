#include<stdio.h>
int main(){
	int arr[5] = {2,6,4,9,3};
	int arrSize = sizeof(arr)/sizeof(int);
	printf("Mang chua duoc sap xep ");
	for(int i = 0; i < arrSize; i++){
		printf("%d", arr[i]);
	}
	for(int i = 1; i < arrSize; i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && key < arr[j]){
			arr[j + 1] = arr[j];
			j--;		
		}
		arr[j + 1]  = key;
	}
	printf("\n");
	printf("Mang da duoc sap xep ");
	for(int i = 0; i < arrSize; i++){
		printf("%d", arr[i]);
	}
}