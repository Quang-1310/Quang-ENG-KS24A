#include<stdio.h>
int main(){
	int m, n;
	printf("Moi ban nhap so dong va so cot cho mang ");
	scanf("%d %d", &m, &n);
	int arr[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf ("Moi ban nhap vao hang %d cot %d ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	int arr_1[m];
	for(int i = 0; i < m; i++){
		arr_1[i] = arr[i][m - i - 1];
	}
	for(int i = 0; i < m ; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(arr_1[j] < arr_1[j + 1]){
				int temp = arr_1[j];
				arr_1[j] = arr_1[j + 1];
				arr_1[j + 1] = temp;				
			}
		}
	}
	for(int i = 0; i < m; i++){
		arr[i][m - i -1] = arr_1[i];
	}
	
	printf("Mang da duoc sap xep theo duong cheo phu theo thu tu giam dan la \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;

}