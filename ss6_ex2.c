#include<stdio.h>
int main(){
	int a, b, c, d, e, totalchan=0, totalle=0;
	printf("Moi ban nhap vao 5 so nguyen ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a % 2 == 0){
		totalchan += 1;
	}
	else{
		totalle += 1;
	}
	if(b % 2 == 0){
		totalchan += 1;
	}
	else{
		totalle += 1;
	}
	if(c % 2 == 0){
		totalchan += 1;
	}
	else{
		totalle += 1;
	}
	if(d % 2 == 0){
		totalchan += 1;
	}
	else{
		totalle += 1;
	}
	if(e % 2 == 0){
		totalchan += 1;
	}
	else{
		totalle += 1;
	}	
	printf(" tong so luong so chan la %d\n", totalchan);		
	printf(" tong so luong so le la %d\n", totalle);	
	return 0;
}