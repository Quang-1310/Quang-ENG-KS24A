#include<stdio.h>
int main(){
	int n[5] = {1, 2, 3, 4, 5};
	for(int i = 4; i >= 0; i-- ){
		printf("%d ", n[i]);
	}
	return 0;
}