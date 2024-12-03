#include <stdio.h>  

int main(){  
	int m, n;
	printf("Moi ban nhap vao so dong va so cot cua mang ");
	scanf("%d %d", &m, &n);
	int arr[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("Moi ban nhap phan tu vao dong %d cot %d ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	int arr_1[m];
	for(int i = 0; i < m; i++){
		arr_1[i] = arr[i][i];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(arr_1[j] > arr_1[j + 1]){
				int temp = arr_1[j];
				arr_1[j] = arr_1[j + 1];
				arr_1[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < m; i++){
		arr[i][i] = arr_1[i];
	}

	printf("mang da sap xep theo duong cheo chinh theo thu tu tang dan la \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	} 

    return 0;  
} 