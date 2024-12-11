#include<stdio.h>
void ham(int arr[100][100]){
	int m, n;
	printf("Mang cua ban co bao nhieu hang bao nhieu cot ");
	scanf("%d %d", &m, &n);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("Moi ban nhap phan tu thu %d ", i + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int arr[100][100];
	ham(arr);
	return 0;
}