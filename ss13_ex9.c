#include<stdio.h>
#include<stdlib.h>

void input(int m, int n, int arr[100][100]){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("Moi ban nhap vao phan tu o dong %d cot %d ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
}
void output(int m, int n, int arr[100][100]){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void goc(int m, int n, int arr[100][100]){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i == 0 && j == 0 || i == 0 && j == n - 1 || i == m - 1 && j == 0 || i == m - 1 && j == n - 1){
				printf("%d ", arr[i][j]);
			}
			else{
				printf("  ");
			}
		}printf("\n");
	}
}
void duongBien(int m, int n, int arr[100][100]){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i == 0 || j == 0 || j == n - 1 || i == m - 1) {
				printf("%d ", arr[i][j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
void duongCheo(int m, int n, int arr[100][100]){
	printf("cac phan tu tren duong cheo chinh la\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				printf("%d ", arr[i][j]);
			}
			else{
				printf("  ");
			}
		}printf("\n");
	}
	printf("\n");
	printf("Cac phan tu nam tren duong cheo phu la\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(j == n - i - 1){
				printf("%d ", arr[i][j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
void matrixSnt(int m, int n, int arr[100][100]){
	printf("Cac so nguyen to co trong ma tran la \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			int count = 0;
			for(int k = 1; k <= arr[i][j]; k++){
				if(arr[i][j] % k == 0){
					count++;
				}
			}
			if(count == 2){
				printf("%d ", arr[i][j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
int main(){
	int arr[100][100];
	int chose, m, n;
	printf("MENU\n");
	printf("1.Nhap gia tri cac phan tu cua mang\n");
	printf("2.In cac phan tu cua mang theo ma tran\n");
	printf("3.In ra cac phan tu o goc theo ma tran\n");
	printf("4.In ra cac phan tu nam tren duong bien theo ma tran\n");
	printf("5.In ra cac phan tu nam tren duong cheo chinh va duong cheo phu theo ma tran\n");
	printf("6.In ra cac phan tu la so nguyen to theo ma tran\n");
	printf("7.Thoat\n");						
	while(1){
		printf("Lua chon cua ban: ");
		scanf("%d",&chose);
		if(chose == 7){
			exit(0);
		}
		if(chose == 1){
			printf("Mang cua ban co bao nhieu hang bao nhieu cot ");
			scanf("%d %d", &m, &n);
			input(m, n, arr);
		
			while(1){
				printf("Lua chon cua ban: ");
				scanf("%d",&chose);	
				if(chose == 2){
					output(m, n, arr);
				}
				if(chose == 3){
					goc(m, n, arr);
				}
				if(chose == 4){
					duongBien(m, n, arr);
				}
				if(chose == 5){
					duongCheo(m, n, arr);
				}
				if(chose == 6){
					matrixSnt(m, n, arr);
				}
				if(chose == 7){
					exit(0);
				}					
			}
		}
		else{
			printf("Ban phai nhap lua chon 1 truoc \n");
		}
	}
}