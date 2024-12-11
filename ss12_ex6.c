#include<stdio.h>
int shh(int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(sum == n){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	printf("Moi ban nhap so nguyen a ");
	scanf("%d", &n);
	if(shh(n)){
		printf("TRUE\n");
	}
	else{
		printf("FALSE\n");
	}
	printf("Moi ban nhap so nguyen b ");
	scanf("%d", &n);
	if(shh(n)){
		printf("TRUE\n");
	}
	else{
		printf("FALSE\n");
	}	
	return 0;
}