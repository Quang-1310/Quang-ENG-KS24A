#include <stdio.h>  
#include <string.h>  
void arr(char a[200]){
	int count[256]={};
	for(int i = 0; i < strlen(a); i++){
		count[a[i]]++;
	}
	for(int i = 0; i < 256; i++){
		if(count[i]>0){
		printf("%c:%d\n", i, count[i]);
		}	
	}
}
int main(){
	char a[200];
	gets(a);
	arr(a);
}

 