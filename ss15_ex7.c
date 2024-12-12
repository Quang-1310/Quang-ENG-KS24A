#include<stdio.h>
#include<string.h>
int main(){
	int countKyTu = 0;
	int countSo = 0;
	int countDB = 0;
	char chuoi[100] = "Hello my gmail is test123@gmail.com";
	for(int i = 0; i < strlen(chuoi); i++){
		if((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z') ){
			countKyTu++;
		}
		else if((chuoi[i] >= '0' && chuoi[i] <= '9')){
			countSo++;
		}
		else{
			countDB++;
		}		
	}
	printf("So ky tu la chu cai: %d\n", countKyTu);
	printf("So ky tu la chu so: %d\n", countSo);
	printf("So ky tu dac biet: %d\n", countDB); 
	return 0;
}