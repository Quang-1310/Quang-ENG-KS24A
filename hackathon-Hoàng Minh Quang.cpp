#include<stdio.h>
#include<stdlib.h>
int main(){
	int chose, n, count, number, i, index, flag = -1, arr[100];
	printf("MENU\n");
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri cac phan tu trong mang\n");
	printf("3.Dem so luong cac phan tu chan le trong mang\n");
	printf("4.Tim gia tri lon thu 2 trong mang\n");
	printf("5.Them 1 phan tu vao dau mang\n");
	printf("6.Xoa phan tu tai 1 vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan (Insertion sort)\n");
	printf("8.Moi ban nhap 1 phan tu . Tim phan tu nguoi dung nhap vao co ton tai trong mang\n");
	printf("9.In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
	printf("10.Sap xep mang theo thu tu giam dan (Bubble sort)\n");
	printf("11.Thoat\n");
	while(1){
		printf("Lua chon cua ban ");
		scanf("%d", &chose);
		if(chose == 11){
			exit(0);
		}
		if(chose == 1){
			printf("Moi ban nhap so luong phan tu cho mang ");
			scanf("%d", &n);
			for(int i = 0; i < n; i++){
				printf("Moi ban phan tu thu %d ", i +1);
				scanf("%d", &arr[i]);			
			}
			while(1){
				printf("Lua chon cua ban ");
				scanf("%d", &chose);				
				if(chose == 2){
					for(int i = 0; i < n; i++){
						printf("arr[%d] = %d", i, arr[i]);
						printf("\n");
					}
				}
				printf("\n");
				if(chose == 3){
					for(int i = 0; i < n; i++){
						if(arr[i] % 2 == 0){
							count++;
						}
					}
					printf("Co %d phan tu chan trong mang\n", count);
					printf("Co %d phan tu le trong mang\n", n - count);
				}
				printf("\n");
				if(chose == 4){
					for(int i = 0; i < n; i++){
						for(int j = 0; j < n - i - 1; j++){
							if(arr[j] > arr[j + 1]){
								int temp = arr[j];
								arr[j] = arr[j + 1];
								arr[j + 1] = temp;
							}
						}
					}
					printf("Phan tu lon thu 2 trong mang la: %d\n", arr[n - 2]);					
				}
				printf("\n");
				if(chose == 5){
					printf("Moi ban nhap vao phan tu can them o dau mang ");
					scanf("%d", &number);
					for(int j = n; j > 0; j--){
						arr[j] = arr[j - 1];
					}
					arr[0] = number;
					n++;
					for(int i = 0; i < n; i++){
						printf("%d ", arr[i]);
					}
				}
				printf("\n");
				if(chose == 6){
					printf("Moi ban nhap vao vi tri can xoa ");
					scanf("%d", &index);
					for(int i = index - 1; i < n; i++){
						arr[i] = arr[i + 1];
					}
					n--;
					for(int i = 0; i < n; i++){
						printf("%d \n", arr[i]);
					}
				}
				printf("\n");
				if(chose == 7){
					for(int i = 1; i < n; i++){
						int key = arr[i];
						int j = i - 1;
						while(j >= 0 && key > arr[j]){
							arr[j + 1] = arr[j];
							j--;		
						}
						arr[j + 1]  = key;
					}
					printf("\n");
					printf("Mang da duoc sap xep theo thu tu giam dan (Insertion sort) ");
					for(int i = 0; i < n; i++){
						printf("%d ", arr[i]);
					}					
				}
				printf("\n");
				if(chose == 8){
					for(int i = 0; i < 5; i++){
						for(int j = 0; j < 5 - 1 - i; j++){
							if(arr[j + 1] < arr[j]){
								int temp = arr[j];
								arr[j] = arr[j + 1];
								arr[j + 1] = temp;
							}
						}
					}
					printf("\n");
					printf("Mang da duoc sap xep ");
					for(int i = 0; i < 5; i++){
						printf("%d ", arr[i]);
					}
					printf("\n");
					int flag = -1, left = 0, right = n - 1;
					printf("Moi ban nhap vao 1 so nguyen can tim kiem ");
					scanf("%d", &number);
					while(left <= right){
						int mid = (left + right) / 2;
						if( arr[mid] == number){
							flag = 1;
							printf("vi tri cua phan tu do trong mang la arr[%d]", mid);
							break;
						}
						else{
							if(number < arr[mid]){
								right = mid - 1;
							}
							if(number > arr[mid]){
								left = mid + 1;
							}
						}
					}
					if(flag == -1){
						printf("Phan tu khong co trong mang");		
					}
				}
				printf("\n");
				if(chose == 9){
					flag = -1;
					for(int i = 0; i < n; i++){
						count = 0;
						for(int j = 1; j <= arr[i]; j++){
							if(arr[i] % j == 0){
								count ++;
							}
						}
						if(count == 2){
							printf("so nguyen to co trong mang da duoc binh phuong la: ");
							printf("%d\n", arr[i] * arr[i]);
							flag = 1;
						}		
					}
					if(flag == -1){
						printf("Trong mang khong co so nguyen to\n ");
					}
				}
				printf("\n");
				if(chose == 10){
					for(int i = 0; i < n; i++){
						for(int j = 0; j < n - i - 1; j++){
							if(arr[j] < arr[j + 1]){
								int temp = arr[j];
								arr[j] = arr[j + 1];
								arr[j + 1] = temp;
							}
						}
					}
					printf("Mang da duoc sap xep theo thu tu giam dan (Bubble sort) la ");
					for(int i = 0; i < n; i++){
						printf("%d ", arr[i]);
					}
				}
				printf("\n");
				if(chose == 11){
					exit(0);
				}
								
			}
		}			
		else{
			printf("Ban phai nhap yeu cau 1 truoc\n");		
		}
	}
	return 0;

}