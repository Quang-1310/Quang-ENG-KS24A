#include<stdio.h>
int main(){
	int max, a[2][3] = {{1, 2, 3}, {4, 5, 6}};
	max = a[0][0];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			if(a[i][j] > max){
				max = a[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la %d", max);
	return 0;
}