#include<stdio.h>

int main(){
	
	FILE *fptr;
	fptr = fopen("D:\\ss21.c\\bt01.txt","r");
	char c = fgetc(fptr);
	if(c != EOF){
		printf("ky tu dau tien trong file la: %c", c);
	}
	else{
		printf("file rong");
	}
	fclose(fptr);
	return 0;
}
