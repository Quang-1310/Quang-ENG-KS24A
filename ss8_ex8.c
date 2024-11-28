#include<stdio.h>
int main(){
	int sum, a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j == 3 - 1 - i){
				printf("%d", a[i][j]);
				sum += a[i][j];
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("tong cac so tren duong cheo phu la %d", sum);
	return 0;
}