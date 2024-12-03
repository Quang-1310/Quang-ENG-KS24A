#include<stdio.h>
int main(){
	int n, arr[5] = {1,2,3,4,5};
	printf("Moi ban nhap vao 1 so can tim ");
	scanf("%d",&n);
	int check = 0;
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
		if(n == arr[i]){
			check = 1;
			printf("vi tri cua phan tu do trong mang la arr[%d]", i);	
		}
	}
	if(check == 0){
		printf("phan tu khong co trong mang");
	}
	return 0;
}