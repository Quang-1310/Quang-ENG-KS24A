#include<stdio.h>
int main(){
	int month;
	float money, interest, moneyReceived = 0, temporary;
	printf("Moi ban nhap vao so tien muon gui ");
	scanf("%f", &money);
	temporary = money;
	printf("Lai suat 1%% \n");
	printf("Ban muon gui trong bao nhieu thang ");
	scanf("%d", &month);
	for(int i = 1; i <= month; i++){
		money += (money * 1/100);
	}
	moneyReceived = money; 
	printf("So tien ban nhan duoc sau %d thang gui la: %.3f\n ", month, moneyReceived);
	interest = moneyReceived - temporary;
	printf("so tien lai trong %d thang ban gui la: %.3f\n ", month, interest);
	return 0;
}