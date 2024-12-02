#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, n, arr[100];
	printf("MENU\n" );
	printf("1.Nhap so phan tu va gia tri cac phan tu \n");
	printf("2.Hien thi cac gia tri \n");
	printf("3.Cac phan tu chan va tinh tong \n");
	printf("4.Gia tri lon nhat va gia tri nho nhat \n");
	printf("5.Cac phan tu la so nguyen to va tinh tong \n");
	printf("6.Nhap vao 1 so va thong ke trong mang co bao nhieu phan tu do \n");
	printf("7.Them 1 phan tu vao vi tri chi dinh \n");
	printf("8.Thoat \n");
	printf("Lua chon cua ban: ");
	while(1){
		scanf("%d", &n);
		if (n == 8){
			exit(0);
		}
		if(n == 1){
			printf("mang cua ban co bao nhieu phan tu ");
			scanf("%d",&i);
			for(int j = 0; j < i; j++){
				printf("Moi ban nhap vao phan tu thu %d ", j + 1);
				scanf("%d", &arr[j]);
			}		
			while(1){
				scanf("%d", &n);
				if(n == 2){
					for(int j = 0; j < i; j++){
						printf("%d ", arr[j]);
					}
				}
				printf("\n");
				if(n == 3){
					int sum = 0;
					for(int j = 0; j < i; j++){
						if(arr[j] % 2 == 0){
							printf("%d", arr[j]);
							sum += arr[j];
						}
					}
					printf("Tong cac phan tu chan co trong mang la %d ", sum);
				}
				printf("\n");
				if(n == 4){
					int max = arr[0], min = arr[0];
					for(int j = 0; j < i; j++){
						if(arr[j] > max){
							max = arr[j];
						}
						if(arr[j] < min){
							min = arr[j];
						}
					}
					printf("Gia tri lon nhat la %d ", max);
					printf("Gia tri nho nhat la %d ", min);
				}
				printf("\n");
				if(n == 5){
					int sum = 0;
					for(int m = 0; m < i; m++){
						int count = 0;
						for(int j = 0; j < i; j++){
							if(arr[m] % arr[j] == 0){
								count++;
							}
						}
						if(count == 2){
							printf("so nguyen to trong mang la %d ", arr[m]);
							sum += arr[m];
						}
					}
					printf("Tong cac so nguyen to co trong mang la %d ", sum);
				}
				printf("\n");
				if(n ==6){
					int m, count = 0;
					printf("Moi ban nhap vao 1 so can thong ke ");
					scanf("%d", &m);
					for(int j = 0; j < i; j++){
						if(arr[j] == m){
							count++;
						}
					}
					printf("trong mang co %d phan tu %d", count, m);
				}
				printf("\n");
				if(n == 7){
					int number, index;
					printf("Moi ban nhap vao vi tri ban muon them ");
					scanf("%d", &index);
					printf("Moi ban nhap vao so muon them ");
					scanf("%d", &number);
					for(int i = 5; i > index-1; i-- ){
						arr[i] = arr[i - 1];
					}
					arr[index-1] = number;
					for(int i = 0; i < 5; i++){
						printf("%d\n", arr[i]);
					}					
				}
				if(n == 8 ){
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
