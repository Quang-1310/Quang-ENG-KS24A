#include<stdio.h>
int main(){
	int i[5] = {1, 2, 3, 4, 5};
	printf("Cac phan tu trong mang la: \n");
	for(int j = 0; j < 5; j++){
		printf("arr[%d] = %d \n",j, i[j]);
	}
	return 0;
}
