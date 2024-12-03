#include<stdio.h>
int main(){
	int m, n;
	printf("Moi ban nhap vao so dong va so cot trong mang ");
	scanf("%d %d", &m, &n);
	int arr[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("Moi ban nhap vao dong %d cot %d ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	for(int j = 0; j < n; j++){
		for(int k = 0; k < m; k++){
			for(int i = 0; i < m - k - 1; i++){
				if(arr[i + 1][j] < arr[i][j]){
					int temp = arr[i][j];
					arr[i][j] = arr[i + 1][j];
					arr[i + 1][j] = temp;
				}
			}
		}
	}
	printf("Mang da duoc sap xep theo cot \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}