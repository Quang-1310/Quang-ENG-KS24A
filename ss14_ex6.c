#include<stdio.h>
#include<string.h>
void chuoi(){
	char string[100];
	printf("Moi ban nhap vao chuoi bat ki ");
	gets(string);
	int sum = strlen(string);
	for(int i = 0; i <= strlen(string); i++){
		if(' ' == string[i]){
			sum--;
		}
	}
	printf("so luong ky tu chu cai trong chuoi ban nhap la %d", sum);
}
int main(){
	chuoi();
}