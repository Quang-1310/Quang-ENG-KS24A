#include<stdio.h>
int main(){
	int n, rep, arr[5]= {1,2,6,4,5};
	printf("Moi ban nhap vao vi tri can sua ");
	scanf("%d",&n);
	printf("Moi ban nhap vao so moi ");
	scanf("%d",&rep);
	arr[n-1]= rep;
	for(int i = 0; i < 5; i++){
		printf("%d", arr[i]);
	}
	return 0;
}
