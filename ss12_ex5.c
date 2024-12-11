#include<stdio.h>
int snt(int n){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			count++;
		}
	}
	if(count == 2){
		return 1;
	}
	else{
	return 0;
	}
}
int main(){
	int n;
	printf("Moi ban nhap vao so nguyen a ");
	scanf("%d", &n);
	if(snt(n)){
		printf("TRUE\n");
	}
	else{
		printf("FALSE\n");
	}
	printf("Moi ban nhap vao so nguyen b ");
	scanf("%d", &n);
	if(snt(n)){
		printf("TRUE");
	}
	else{
		printf("FALSE\n");
	}	
}