#include<stdio.h>
#include<string.h>
struct sinhVien{
	char name[50];
	int age;
	long long phoneNumber;
	
};
typedef struct sinhVien SV;
int main(){
	SV a = {"Hoang Minh Quang" , 18, 123456789};
	printf("Ho va ten : %s\n", a.name);
	printf("Tuoi : %d\n", a.age);
	printf ("SDT : %lld\n", a.phoneNumber);
	return 0;

}