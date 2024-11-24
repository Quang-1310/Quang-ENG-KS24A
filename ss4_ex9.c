#include<stdio.h>
int main(){
	int day, month, year;
	printf("moi ban nhap ngay ");
	scanf("%d", &day);
	printf("moi ban nhap thang ");
	scanf("%d", &month);
	printf("moi ban nhap nam ");
	scanf("%d", &year);
	int leap_year = 0;
	if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
		leap_year = 1;
	}
	int correct_month = 1;
	if(month < 1 || month > 12){
		correct_month = 0;
	}
	int correct_day = 1;
	if(correct_month){
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			if(day < 1 || day > 31){
				correct_day = 0;
			}	
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11){
			if(day < 1 || day > 30){
				correct_day = 0;
			}
		}
		else if(month == 2){
			if(leap_year){
				if(day < 1 || day > 29){
					correct_day = 0;
				}
			}
			else if(day < 1 || day > 28){
				correct_day = 0;
			}
		}
	}
	if(correct_day){
		printf("%d-%d-%d hop le ", day, month, year);
	}
	else{
		printf("%d-%d-%d khong hop le ", day, month, year);
	}
	return 0;
	
}