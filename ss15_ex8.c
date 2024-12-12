#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100] = "hello world";
	for(int i = 0; i < strlen(chuoi); i++){
		if(i == 0){
			chuoi[i] -= 32;
		}
		else if(chuoi[i - 1] == ' ' && chuoi[i] >= 'a' &&chuoi[i] <= 'z'){
			chuoi[i] -=32;
		}
	}
	printf("%s",chuoi);
	return 0;
}