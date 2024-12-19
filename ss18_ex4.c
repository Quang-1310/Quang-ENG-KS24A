#include<stdio.h>
#include<string.h>

struct sinhVien{
	char name[50];
	int age;
	long long phoneNumber;
	int id;
};
typedef struct sinhVien SV;
int main(){
	SV a[5];
	for(int i = 0; i < 5; i++){
		printf("Moi nhap ten cho sinh vien thu %d: ", i + 1);
		fflush(stdin);
		fgets(a[i].name,50,stdin);		
		printf("Moi ban nhap tuoi cho sinh vien thu %d: ", i + 1);
		scanf("%d", &a[i].age);
		printf("Moi ban nhap so dien thoai cho sinh vien thu %d: ", i + 1);
		scanf("%lld", &a[i].phoneNumber);
	}
	for(int i = 0; i < 5; i++){
		a[i].id = i + 1;
		printf("id cua sinh vien thu %d: %d\n", i + 1, a[i].id);
		printf("Ho va ten sinh vien %d: %s", i + 1, a[i].name);
		printf("Tuoi cua sinh vien %d: %d\n", i + 1, a[i].age);
		printf("SDT cua sinh vien %d: %lld\n", i + 1, a[i].phoneNumber);
		printf("\n");
	}
	return 0;
}