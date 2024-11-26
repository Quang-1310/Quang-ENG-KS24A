#include<stdio.h>
int main(){
	int temporary = 0, i = 100, total;
	for(i; i <= 999; i++){
		total = 0;
		int number = i;
		while(number > 0){
			temporary = number % 10;
			number /= 10;
			total += (temporary * temporary * temporary);
		}			
		if(total == i){
			printf("%d ", i);
		}
	}
	return 0;
}