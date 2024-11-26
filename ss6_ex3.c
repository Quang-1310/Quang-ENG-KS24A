#include<stdio.h>
int main(){
	int n, mk = 123456;
	printf("Moi ban nhap mat khau ");	
	while(1){
	scanf("%d", &n);
		if(n == mk){
			printf(" dung roi");
			break;
		}
		else{
			printf(" sai roi moi nhap lai ");
		}
	}
	return 0;
}