#include<stdio.h>
int main(){
	int arr[5] = {3,7,1,9,4};
	int arrSize = sizeof(arr)/sizeof(int);
	printf("Mang chua duoc sap xep ");
	for(int i = 0; i < arrSize; i++){
		printf("%d", arr[i]);
	}
	for(int i = 0; i < arrSize; i++){
		int minIndex = i;
		for(int j = i + 1; j < arrSize; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		if(minIndex != i){
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
	printf("\n");
	printf("Mang da duoc sap xep ");
	for(int i = 0; i < arrSize; i++){
		printf("%d", arr[i]);
	}
	return 0;
}