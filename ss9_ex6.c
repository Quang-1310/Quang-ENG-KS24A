#include<stdio.h>
#include<stdlib.h>
int main(){
	int c, m, n, arr[100][100];
	printf("MENU\n" );
	printf("1.Nhap kich co va gia tri cac phan tu cua mang \n");
	printf("2.In gia tri cac phan tu theo ma tran \n");
	printf("3.In cac phan tu la le va tinh tong \n");
	printf("4.In cac phan tu nam tren duong bien va tinh tich \n");
	printf("5.In cac phan tu nam tren duong cheo chinh \n");
	printf("6.In cac phan tu nam tren duong cheo phu \n");
	printf("7.In ra dong co tong cac phan tu la lon nhat \n");
	printf("8.Thoat \n");
	printf("Lua chon cua ban: ");
	while(1){
		scanf("%d", &c);
		if (c == 8){
			exit(0);
		}
		if(c == 1){
			printf("mang cua ban co bao nhieu hang bao nhieu cot ");
			scanf("%d %d",&m, &n);
			for(int i = 0; i < m; i++){
				for(int j = 0; j < n; j++){
					printf("Moi ban nhap vao gia tri hang %d cot %d ", i +1, j + 1);
					scanf("%d", &arr[i][j]);
				}				
			}
			while(1){
				scanf("%d", &c);
				if(c == 2){
					for(int i = 0; i < m; i++){
						for(int j = 0; j < n; j++){
							printf("%d ", arr[i][j]);
						}
					}
				}
				printf("\n");
				if(c == 3){
					int sum = 0;
					for(int i = 0; i < m; i++){
						for(int j = 0; j < n; j++){
							if(arr[i][j] % 2 != 0){
								printf("so le trong mang la %d\n", arr[i][j]);
								sum += arr[i][j];
							}	
						}
					}
					printf("Tong cac phan tu le co trong mang la %d ", sum);
				}
				printf("\n");
				if(c == 4){
					int mul = 1;
					for(int i = 0; i < m; i++){
						for(int j = 0; j < n; j++){
							if(i == 0 || i == m -1 || j == 0 || j == n - 1){
								printf("%d ", arr[i][j]);
								mul *= arr[i][j];
							}
						}
					}
					printf("tich cac phan tu nam tren duong bien la %d", mul);
				}
				printf("\n");
				if(c == 5){
					for(int i = 0; i < m; i++){
						for(int j = 0; j < n; j++){
							if(i == j){
								printf("%d", arr[i][j]);
							}
							else{
								printf(" ");
							}
						}
					}
				}
				printf("\n");
				if(c == 6){
					for(int i = 0; i < m; i++){
						for(int j = 0; j < n; j++){
							if(j == n - 1 - i){
								printf("%d", arr[i][j]);
							}
							else{
								printf(" ");
							}
						}
					}
				}
				printf("\n");
				if(c == 7){
					int hang, max = 0;
					for(int i = 0; i < m; i++){
						int sum = 0;
						for(int j = 0; j < n; j++){
							sum += arr[i][j];
						}
						if(sum > max){
							max = sum;
							hang = i;
						}	
					}
					printf("%d\n", max);
					printf("hang co tong cac gia tri lon nhat la ");
					for(int j = 0; j < n; j++){
						printf("%d ", arr[hang][j]);							
						}						
				}
				if(c == 8 ){
					exit(0);
				}								
			}
		}
		else{
			printf("Ban phai nhap yeu cau 1 truoc ");
		}
	}
	return 0;
}