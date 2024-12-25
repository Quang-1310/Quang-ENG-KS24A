#include<stdio.h>
#include<string.h>
struct sinhVien{
	int id;
	char name[50];
	int age;
};
typedef struct sinhVien sv;
int main(){
	int n;
	sv a[100];
	FILE *fptr;
	fptr = fopen("D:\\ss21.c\\students.txt","w");
	printf("Moi ban nhap vao so luong sinh vien: ");
	scanf("%d", &n);
	fflush(stdin);
	for(int i = 0; i < n; i++){
		a[i].id = i + 1;
		printf("Moi ban nhap thong tin sinh vien thu %d: \n", i + 1);
		printf("Ten: ");
		fgets(a[i].name, sizeof(a[i].name), stdin);
		int len =strlen(a[i].name);
		if(a[i].name[len - 1] == '\n'){
			a[i].name[len - 1] = '\0';
		}
		printf("Tuoi: ");
		scanf("%d", &a[i].age);
		fflush(stdin);
		fprintf(fptr, "ID: %d ", a[i].id);
        fprintf(fptr, "Ten: %s ", a[i].name);
        fprintf(fptr, "Tuoi: %d\n\n", a[i].age);
	}
	fclose(fptr);
	return 0;
}