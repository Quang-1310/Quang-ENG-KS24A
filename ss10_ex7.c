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
	for(int i = 0; i < m; i++){
		for(int k = 0; k < n; k++){
			for(int j = 0; j < n - k - 1; j++){
				if(arr[i][j +1] < arr[i][j]){
					int temp = arr[i][j];
					arr[i][j] = arr[i][j +1];
					arr[i][j + 1] = temp;
				}
			}
		}
	}
	printf("mang da sap xep theo hang \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	} 

    return 0;  
} 