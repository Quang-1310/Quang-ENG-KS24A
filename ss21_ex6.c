#include<stdio.h>

int main(){
	char c[1000];
	FILE *fptr;
	fptr = fopen("D:\\ss21.c\\bt01.txt", "r");
	fgets(c, 1000,fptr);
	fclose(fptr);
	FILE *f;
	f = fopen("D:\\ss21.c\\bt06.txt", "w");
	fputs(c, f);
	fclose(f);
	return 0;
}
