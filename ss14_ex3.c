#include<stdio.h>
void chuoi(char string[20]){
	printf("Moi ban nhap chuoi bat ki ");
	gets(string);
	strlen(string);
	for(int i = strlen(string) - 1; i >= 0; i--){
		printf("%c ", string[i]);
	}
}
int main(){
	char string[20];
	chuoi(string);
}