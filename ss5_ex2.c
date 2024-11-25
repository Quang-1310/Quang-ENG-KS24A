#include<stdio.h>
int main(){
	int n = 10;
	int i;
	printf(" moi ban nhap so can tim ");
	while(1){
		scanf("%d", &i);
		if(i == n){
			printf(" dung roi ");
				break;
	}
		else{
			printf(" sai roi moi nhap lai ");
		}
	}
	return 0;
}