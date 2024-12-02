#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, n, arr[100];
	printf("MENU\n" );
	printf("1.Nhap vao mang \n");
	printf("2.Hien thi mang \n");
	printf("3.Them phan tu \n");
	printf("4.Sua phan tu \n");
	printf("5.Xoa phan tu \n");
	printf("6.Thoat \n");
	printf("Lua chon cua ban: ");
	while(1){
		scanf("%d", &n);
		if (n == 6){
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
				printf("\n");
				if(n == 4){
					int rep;
					printf("Moi ban nhap vao vi tri can sua ");
					scanf("%d",&n);
					printf("Moi ban nhap vao so moi ");
					scanf("%d",&rep);
					arr[n-1]= rep;
					for(int i = 0; i < 5; i++){
						printf("%d", arr[i]);
					}
				}
				printf("\n");
				if(n == 5){
					printf("Moi ban nhap vao vi tri can xoa ");
					scanf("%d",&n);
					for(int i = n -1; i < 5; i++){
						arr[i] = arr[i+1];
					}
					for(int i = 0; i < 4; i++){
						printf("%d", arr[i]);
					}
				}
				printf("\n");
				if(n == 6 ){
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

