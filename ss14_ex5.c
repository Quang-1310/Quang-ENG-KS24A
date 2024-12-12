#include<stdio.h>
#include<string.h>
void chuoi(){
	char string[100];
	int count = 0;
	printf("Moi ban nhap 1 chuoi bat ki ");
	gets(string);
	for(int i = 0; i < strlen(string); i++){
		if(string[i] == ' '){
			count++;	
		}
	}
	printf("chuoi ban nhap co %d tu", count + 1);	
}
int main(){
	chuoi();
}