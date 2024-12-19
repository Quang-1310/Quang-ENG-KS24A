#include<stdio.h>
#include<string.h>

struct sinhVien{
	int id;
	char name[50];
	int age;
	long long phoneNumber;
};
void add();
void output();
typedef struct sinhVien SV;
int main(){
	SV a[50] = {
		{1, "Nguyen Van A", 18, 123},
		{2, "Nguyen Van B", 19, 234},
		{3, "Nguyen Van C", 20, 345},
		{4, "Nguyen Van D", 21, 456},
		{5, "Nguyen Van E", 22, 567},		
	};
	int n = 5;
	add(a, &n);
	output(a, n);
	return 0;
}
void add(SV a[], int *n){
	a[*n].id = *n + 1; 
	printf("Moi ban nhap thong tin sinh vien can them: \n");
	printf("Ho va ten: ");
	fflush(stdin);
	fgets(a[*n].name, 50, stdin);
	int len = strlen(a[*n].name);
	if(a[*n].name[len - 1] == '\n'){
		a[*n].name[len - 1] = '\0';
	}
	printf("Tuoi: ");
	scanf("%d", &a[*n].age);
	printf("SDT: ");
	scanf("%lld", &a[*n].phoneNumber);	 
	(*n)++;
}
void output(SV a[], int n){
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ho va ten: %s\n", a[i].name);
		printf("Tuoi: %d\n", a[i].age);
		printf("SDT: %lld\n",a[i].phoneNumber);
		printf("\n");
	}
}