#include<stdio.h>
#include<string.h>
void chuoi(char string[20]){
	printf("Moi ban nhap vao 1 chuoi bat ki ");
	gets(string);
	puts(string);
	strlen(string);
	printf("Do dai cua chuoi la %d", strlen(string));
}
int main(){	
	char string[20];
	chuoi(string);
}