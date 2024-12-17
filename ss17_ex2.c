#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void output();
void letter();
void number();
void special();
int main(){
	int chose;
	char arr[100];
	printf("MENU/");
	printf("1.Nhap chuoi vao\n");
	printf("2.In chuoi ra\n");
	printf("3.Dem so luong chu cai trong chuoi va in ra\n");
	printf("4.Dem so luong chu so trong chuoi va in ra\n");
	printf("5.Dem so luong ky tu dac biet trong chuoi va in ra\n");
	printf("6.Thoat\n");	
	while(1){
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 6){
			exit(0);
		}
		if(chose == 1){
			fflush(stdin);
			printf("Moi ban nhap vao chuoi ");
			fgets(arr,100,stdin);
			int length = strlen(arr);
			if(arr[length - 1] == '\n'){
				arr[length - 1] = '\0';
				length--;
			}
			while(1){
				printf("Lua chon cua ban: ");
				scanf("%d", &chose);			
				if(chose == 2){
					output(arr, length);
				}
				printf("\n");
				if(chose == 3){
					letter(arr,length);
				}
				printf("\n");
				if(chose == 4){
					number(arr,length);
				}
				printf("\n");
				if(chose == 5){
					special(arr, length);
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
void output(char *ptr, int length){
	printf("%s", ptr);
}
void letter(char *ptr, int length){
	int count = 0;
	for(int i = 0; i < length; i++){
		if(ptr[i] >= 'a' && ptr[i] <= 'z' || ptr[i] >= 'A' && ptr[i] <= 'Z'){
			count++;
			printf("%c", ptr[i]);
		}
	}
	printf("\n");
	printf("so luong chu cai trong chuoi la: %d", count);
}	
void number(char *ptr, int length){
	int count = 0;
	for(int i = 0; i < length; i++){
		if(ptr[i] >= '0' && ptr[i] <= '9'){
			count++;
			printf("%c", ptr[i]);
		}
	}
	printf("\n");
	printf("So luong chu so trong chuoi la: %d", count);
}
void special(char *ptr, int length){
	int count = 0;
	for(int i = 0; i < length; i++){
		if(ptr[i] >= 0 && ptr[i] <= 47 || ptr[i] >= 58 && ptr[i] <= 64){
			count++;
			printf("%c", ptr[i]);
		}
	}
	printf("So luong ky tu dac biet trong chuoi la %d", count);
}	
