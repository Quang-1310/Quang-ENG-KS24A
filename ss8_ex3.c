#include<stdio.h>
int main(){
	int n, m, temporary;
	printf("Moi ban nhap vao 1 so nguyen ");
	scanf("%d",&n);
	m = n;
	temporary = n;
	int a[n][m];
	for(int i = 0;i < n; i++){
		for(int j = 0; j < m; j++){
			a[i][j] = temporary;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j  = 0; j < m; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}