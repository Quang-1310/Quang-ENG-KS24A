#include<stdio.h>
int main(){
	int day, month, year, leapYear = 0, correctMonth = 1; 
	printf("Moi ban nhap vao thang ");
	scanf("%d", &month);
	printf("Moi ban nhap vao nam ");
	scanf("%d", &year);
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		leapYear = 1;
	}
	if(month < 1 || month > 12){
		correctMonth = 0;		
	}
	if(correctMonth){
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			day = 31;			
		}
		else if(month == 4 || month == 6|| month == 9 || month == 11){
			day = 30;
		}
		else if(month == 2){
			if(leapYear){
				day = 29;
			}
			else{
				day = 28;
			}			
		}			
	}					
	printf(" nam %d thang %d co %d ngay", year, month, day);
	return 0;
}

	
	