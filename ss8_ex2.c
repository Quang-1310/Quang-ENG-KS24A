#include<stdio.h>
int main(){
	int i, dem, n[5] = {1, 2, 3, 4, 5};
	printf("Moi ban nhap vao 1 phan tu ");
	scanf("%d", &i);
	for(int j = 0; j < 5; j++){
		if(i == n[j]){
			printf("vi tri phan tu trong mang la n[%d]", j);
		}
		if(i != n[j]){
			dem += 1;
		}
	}
	if(dem == 5){
		printf("phan tu ban nhap khong co trong mang ");
	}
	return 0;
}
	