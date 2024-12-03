#include<stdio.h>
int main(){
	int temp, arr[5] = {3,2,7,1,9};
	int arrSize = sizeof(arr)/sizeof(int);
	printf("Mang chua duoc sap xep ");
	for(int i = 0; i < arrSize; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	for(int i = 0; i < arrSize; i++){
		for(int j = 0; j < arrSize - 1 - i; j++){
			if(arr[j + 1] < arr[j]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Mang da duoc sap xep ");
	for(int i = 0; i < arrSize; i++){
		printf("%d", arr[i]);
	}	
	return 0;
}