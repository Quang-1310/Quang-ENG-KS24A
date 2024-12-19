#include<stdio.h>
#include<string.h>
struct sinhVien{
	char name[50];
	int age;
	long long phoneNumber;
	
};
typedef struct sinhVien SV;
int main(){	
	SV a;
	printf("Moi ban nhap ten: ");
	fgets(a.name,50,stdin);
	fflush(stdin);
	printf("Moi ban nhap tuoi: ");
	scanf("%d", &a.age);
	printf("Moi ban nhap SDT: ");
	scanf("%lld", &a.phoneNumber);
	printf("Ho va ten: %s", a.name);
	printf("Tuoi: %d\n", a.age);
	printf("SDT: %lld\n", a.phoneNumber);
	return 0;

}