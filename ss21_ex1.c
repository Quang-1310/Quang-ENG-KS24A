#include<stdio.h>

int main(){
	char c[100];
	FILE *fptr;
	fptr = fopen("bt01.txt","w");
	if(fptr == NULL){
		printf("Khong the mo file");
	}
	else{
		printf("Moi van nhap 1 chuoi bat ki: ");
		fgets(c, 100, stdin);
		fprintf(fptr, "%s", c);
		fclose(fptr);
	}
	return 0;
}
