#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("D:\\ss21.c\\bt01.txt", "r");	
	if(fptr == NULL){
		printf("Khong the mo file");
		return 1;
	}
	else{
		char c[1000]; 
		fgets(c,1000,fptr);
		printf("dong dau tien tu file la: %s", c);	
	}
	fclose(fptr);
	return 0;
}
