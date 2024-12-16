#include <stdio.h>
#include <string.h>

void ptr();
int main(){
	char inputString[100];
	char reverseString[100];
	printf("Moi ban nhap vao chuoi ");
	fgets(inputString, 100, stdin);
	ptr(inputString, reverseString);
	printf("chuoi ban dau: %s\n", inputString);
	printf("chuoi dao nguoc: %s", reverseString);
	return 0;
}
void ptr(char *input, char *reverse){
	int length = strlen(input);
	char *end = input + length - 1;
	if(*end == '\n'){
		*end = '\0';
		length--;
		end--;
	}
	while(end >= input){
		*reverse = *end;
		reverse++;
		end--;
	}
}
