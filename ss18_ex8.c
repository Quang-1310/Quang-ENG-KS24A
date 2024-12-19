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
	int index;
	printf("Moi ban nhap vi tri muon them sinh vien vao: ");
	scanf("%d", &index);	
	for(int i = *n; i > index - 1; i--){
		a[i] = a[i - 1];
	}
	printf("Moi ban nhap thong tin sinh vien can them: \n");
	printf("Ho va ten: ");
	fflush(stdin);
	fgets(a[index - 1].name, 50, stdin);
	int len = strlen(a[index - 1].name);
	if(a[index - 1].name[len - 1] == '\n'){
		a[index - 1].name[len - 1] = '\0';
	}
	printf("Tuoi: ");
	scanf("%d", &a[index - 1].age); 	 	
	printf("SDT: ");
	scanf("%lld", &a[index - 1].phoneNumber);	
	(*n)++; 
	for(int i = 0; i < *n; i++){
		a[i].id = i + 1;
	}
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