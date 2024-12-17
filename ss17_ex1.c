#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input();
void output();
void sizeArray();
int total();
void maxNumber();
int main(){
	int n, chose, arr[100];
	printf("MENU\n");
	printf("1. Nhap vao so phan tu va tung phan tu\n");
	printf("2. Hien thi cac phan tu trong mang\n");
	printf("3. Tinh do dai mang\n");
	printf("4. Tinh tong cac phan tu trong mang\n");
	printf("5. Hien thi phan tu lon nhat\n");
	printf("6. Thoat\n");
	while(1){
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 6){
			exit(0);
		}
		if(chose == 1){
			printf("Moi ban nhap so phan tu cua mang ");
			scanf("%d", &n);
			input(arr, n);
			while(1){
				printf("Lua chon cua ban: ");
				scanf("%d", &chose);
				if(chose == 2){
						output(arr, n);					
				}
				printf("\n");
				if(chose == 3){
					sizeArray(n);
				}
				printf("\n");				
				if(chose == 4){
					int t = total(arr, n);
					printf("Tong cac phan tu trong mang la: %d", t);
				}
				printf("\n");
				if(chose == 5){
					maxNumber(arr, n);
				}
				printf("\n");
				if(chose == 6){
					exit(0);
				}
			}	
		}
		else{
			printf("Ban phai nhap lua chon 1 truoc \n");
		}
	}			
	return 0;
}
void input(int *ptr, int n){
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d ", i + 1);
		scanf("%d", &ptr[i]);
	}
}
void output(int *ptr, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", ptr[i]);
	}
}
void sizeArray(int n){
	printf("Do dai cua mang la: ");
	printf("%d", n);	
}
int total(int *ptr, int n){
	int tong = 0;
	for(int i = 0; i < n; i++){
		tong += ptr[i];
	}
	return tong;
}
void maxNumber(int *ptr, int n){
	int max = ptr[0];
	for(int i = 1; i < n; i++){
		if(ptr[i] > max){
			max = ptr[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d", max);
}