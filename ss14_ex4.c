#include<stdio.h>
#include<string.h>
void chuoi(){
	char k[10];
	int count = 0;
	printf("Moi ban nhap chuoi bat ki ");
	gets(k);
	strlen(k);
	char x;
	printf("Moi ban nhap vao 1 ky tu bat ki ");
	scanf("%c", &x);
	for(int i = 0; i < strlen(k); i++){
		if(x==k[i]){
			count++;
		}
	}
	printf("so lan xuat hien cua ki tu %c la %d", x, count);	
}
int main(){
	chuoi();
}