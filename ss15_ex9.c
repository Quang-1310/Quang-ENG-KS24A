#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100] = "hello world";
	int length = strlen(chuoi);
	for(int i = 0; i < strlen(chuoi); i++){
		if(chuoi[i] == 'o'){
			for(int j = i; j < length; j++){
				chuoi[j] = chuoi[j + 1];
			}
		}
	}
	length--;
	printf("%s",chuoi);
	return 0;
}