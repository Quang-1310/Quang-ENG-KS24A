#include<stdio.h>
#include<stdlib.h>
void input();
void evenNumber();
void snt();
void reverse();
void increase();
void decrease();
void search();
int main(){
	int chose, n;
	char arr[100];
	printf("MENU/");
	printf("1.Nhap vao so phan tu va tung phan tu\n");
	printf("2.In ra cac phan tu la so chan\n");
	printf("3.In ra cac phan tu la so nguyen to\n");
	printf("4.Dao nguoc mang\n");
	printf("5.Sap xep mang\n");
	printf(" a.Tang dan\n");
	printf(" b.Giam dan\n");
	printf("6.Nhap vao 1 phan tu va tim kiem trong mang\n");
	printf("7.Thoat\n");
	while(1){
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 7){
			exit(0);
		}
		if(chose == 1){
			printf("Moi ban nhap vao so phan tu ");
			scanf("%d", &n);
			input(arr, n);
			while(1){
				printf("Lua chon cua ban: ");
				scanf("%d", &chose);			
				if(chose == 2){
					evenNumber(arr, n);
				}
				printf("\n");
				if(chose == 3){
					snt(arr, n);
				}
				printf("\n");
				if(chose == 4){
					reverse(arr,n);				
				}
				printf("\n");
				if(chose == 5){
					fflush(stdin);
					char c;
					printf("Ban muon sap xep mang theo thu tu nao\n");
					printf("a.Tang dan\n");
					printf("b.Giam dan\n");
					printf("Lua chon cua ban: ");
					scanf("%c", &c);
					if(c == 'a'){
						increase(arr,n);
					}
					else if(c == 'b'){
						decrease(arr,n);
					}
				}
				printf("\n");
				if(chose == 6){
					search(arr,n);	
				}
				printf("\n");
				if(chose == 7){
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
		printf("Moi van nhap vao phan tu thu %d: ", i + 1);
		scanf("%d", &ptr[i]);
	}
}
void evenNumber(int *ptr, int n){
	for(int i = 0; i < n; i++){
		if(ptr[i] % 2 == 0){
			printf("%d ", ptr[i]);
		}
	}
}
void snt(int *ptr, int n){
	int flag = -1;
	for(int i = 0; i < n; i++){
		int count = 0;
		for(int j = 1; j <= ptr[i]; j++){
			if(ptr[i] % j == 0){
				count++;
			}
		}
		if(count == 2){
			flag = 1;
			printf("%d la so nguyen to\n", ptr[i]);
		}
	}
	if(flag == -1){
		printf("trong mang khong co so nguyen to nao");
	}
}
void reverse(int *ptr, int n ){
	for(int i = n - 1; i >= 0; i--){
		printf("%d ", ptr[i]);
	}
}
void increase(int *ptr, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(ptr[j] > ptr[j + 1]){
				int temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d ", ptr[i]);
	}
}
void decrease(int *ptr, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(ptr[j] < ptr[j + 1]){
				int temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d ", ptr[i]);
	}
}
void search(int *ptr, int n){
	int number;
	int flag = -1;
	printf("Moi ban nhap vao so can tim: ");
	scanf("%d", &number);
	for(int i = 0; i < n; i++){
		if(ptr[i] == number){
			flag = 1;
			printf("So %d nam o vi tri thu arr[%d]", number, i);
		}
	}
	if(flag == -1){
		printf("So ban can tim khong co trong mang");
	}
}