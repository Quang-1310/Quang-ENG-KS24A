#include<stdio.h>
int main(){
	int m, n;
	printf("Moi ban nhap vao so hang va so cot cua mang ");
	scanf("%d %d",&m, &n);
	int a[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("Moi ban nhap vao phan tu o hang %d cot %d ",i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}