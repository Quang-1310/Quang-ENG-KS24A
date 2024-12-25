#include<stdio.h>
#include<string.h>
int main(){
	FILE *fptr;
	fptr = fopen("D:\\ss21.c\\bt01.txt", "a");
	if(fptr == NULL){
		printf("Khong the mo file");
		return 1;
	}
	else{
		char c[100];
		printf("Moi ban nhap them 1 chuoi bat ki: ");
		fgets(c, 100, stdin);
		int len = strlen(c);
		if(len > 0 && c[len - 1] == '\n'){
			c[len - 1] = '\0';
		}
		fprintf(fptr, "%s", c);
	}
	fclose(fptr);
	return 0;
}
