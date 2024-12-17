#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void output();
void compare();
void countLetter();
void upper();
void addArray();
int main(){
	int chose;
	char arr[100];
	printf("MENU/");
	printf("1.Nhap chuoi vao\n");
	printf("2.In chuoi dao nguoc\n");
	printf("3.Dem so luong tu trong chuoi\n");
	printf("4.Nhap chuoi khac va so sanh 2 chuoi\n");
	printf("5.In hoa tat ca cac chu cai trong chuoi\n");
	printf("6.Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
	printf("7.Thoat\n");
	while(1){
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 7){
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
					countLetter(arr, length);
				}
				printf("\n");
				if(chose == 4){
					fflush(stdin);
					char arr1[100];
					printf("Nhap chuoi khac ");
					fgets(arr1,100,stdin);
					int length = strlen(arr1);
					if(arr1[length - 1] == '\n'){
						arr1[length - 1] = '\0';
						length--;
					}
					compare(arr, arr1);					
				}
				printf("\n");
				if(chose == 5){
					upper(arr,length);
				}
				printf("\n");
				if(chose == 6){
					fflush(stdin);					
					char arr2[100];
					printf("Nhap chuoi khac ");
					fgets(arr2,100,stdin);
					addArray(arr,arr2,length);
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
void output(char *ptr, int length){
	for(int i = length - 1; i >= 0; i--){
		printf("%c", ptr[i]);
	}
}
void compare(char *ptr, char *ptr1){
	if(strlen(ptr) > strlen(ptr1)){
		printf("Chuoi 1 dai hon chuoi 2");
	}
	else if(strlen(ptr) < strlen(ptr1)){
		printf("Chuoi 2 dai hon chuoi 1");
	}
	else{
		printf("2 chuoi bang nhau");
	}
}
void countLetter(char *ptr, int length){
	int count = 0;
	for(int i = 0; i < length; i++){
		if(ptr[i] == ' '){
			count++;
		}
	}
	printf("trong chuoi co %d tu", count + 1);
}
void upper(char *ptr, int length){
	for(int i = 0; i < length; i++){
		if(ptr[i] >= 'a' && ptr[i] <= 'z'){
			ptr[i] -= 32;
		}
	}
	printf("%s", ptr);
}
void addArray(char *ptr, char *ptr2, int length){
	strcat(ptr,ptr2);
	printf("%s", ptr);
}