#include<stdio.h>
#include<string.h>
struct dish{
	int id;
	char name[100];
	float price;
};
void output();
void add(); 
void fix();
void dele();
void decrese();
void increse();
void ls();
void bs();
int main(){
	int chose;
	struct dish menu[100] = {
		{1,"com rang dua bo",20.000},
		{2,"bun cha",40.000},
		{3,"pho ga",40.000},
		{4,"mi tom",10.000},
		{5,"banh cuon",20.000}
	};
	int n = 5;
	do{
		printf("1.In ra cac phan tu co trong menu\n");
		printf("2.Them 1 phan tu vao vi tri chi dinh\n");
		printf("3.Sua 1 phan tu o vi tri chi dinh\n");
		printf("4.Xoa 1 phan tu o vi tri chi dinh\n");
		printf("5.Sap xep cac phan tu\n");
		printf("a.Giam dan theo price\n");
		printf("b.Tang dan theo price\n");
		printf("6.Tim kiem phan tu theo name nhap vao\n");
		printf("a.Tim kiem tuyen tinh\n");
		printf("b.Tim kiem nhi phan\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 1){
			printf("MENU\n");			
			output(menu,n);
		}
		printf("\n");
		if(chose == 2){
			add(menu,&n);
		}
		printf("\n");
		if(chose == 3){
			fix(&menu,n);
		}
		printf("\n");
		if(chose == 4){
			dele(menu, &n);
		}
		printf("\n");
		if(chose == 5){
			fflush(stdin);			
			char c;
			printf("a.Giam dan theo price\n");
			printf("b.Tang dan theo price\n");
			printf("Ban muon sap xep theo lua chon nao: ");
			scanf("%c", &c);
			if(c == 'a'){
				decrese(menu,n);
			}
			else if(c == 'b'){
				increse(menu,n);
			}						
		}
		printf("\n");
		if(chose == 6){
			fflush(stdin);			
			char c;
			printf("a.Tim kiem tuyen tinh\n");
			printf("b.Tim kiem nhi phan\n");
			printf("Ban muon tim kiem theo lua chon nao: ");
			scanf("%c", &c);
			fflush(stdin);
			if(c == 'a'){
				ls(menu, n);
			}
			else if(c == 'b'){
				bs(menu, n);
			}			
		}
		printf("\n");
	}while(chose != 7);
	return 0;
}
void output( struct dish menu[], int n){
	for(int i = 0; i < n; i++){
		printf("%d.%s:%.3f\n", menu[i].id, menu[i].name, menu[i].price);
	}
}
void add(struct dish menu[], int *n){
	int index;
	printf("Moi ban nhap vao vi tri can them: ");
	scanf("%d", &index);
	fflush(stdin);	
	for(int i = *n; i > index - 1; i--){
		menu[i] = menu[i - 1];
	}
	printf("Moi ban nhap them mon an: ");
	fgets(menu[index - 1].name,100,stdin);
	int len = strlen(menu[index - 1].name);
	if(menu[index - 1].name[len - 1] == '\n'){
		menu[index - 1].name[len - 1] = '\0';
	}
	printf("Moi ban nhap gia: ");
	scanf("%f", &menu[index - 1].price);
	(*n)++;
	for(int i = 0; i < *n; i++){
		menu[i].id = i + 1;
	}
	for(int i = 0; i < *n; i++){
		printf("%d.%s:%.3f\n", menu[i].id,menu[i].name,menu[i].price);
	}
	
	
}
void fix(struct dish *menu, int n){
	printf("Moi ban nhap vao vi tri can sua: ");
	int index;
	scanf("%d", &index);
	fflush(stdin);
	printf("Moi ban nhap ten mon an moi: ");
	fgets(menu[index - 1].name, 100, stdin);
	int len = strlen(menu[index - 1].name);
	if (menu[index - 1].name[len - 1] == '\n'){
        menu[index - 1].name[len - 1] = '\0';
    }	
	printf("Moi ban nhap gia mon an moi: ");
	scanf("%f", &menu[index - 1].price);
	for(int i = 0; i < n; i++){
		 printf("%d.%s:%.3f\n", menu[i].id, menu[i].name, menu[i].price);
	}
}
void dele(struct dish menu[], int *n){
	int index;
	int flag = -1;
	printf("Moi ban nhap vi tri muon xoa: ");
	scanf("%d", &index);
	fflush(stdin);
	for(int i = 0; i < *n; i++){
		if(index == menu[i].id){
			flag = 1;
			for(int j = i; j < *n; j++){
				menu[j] = menu[j + 1];
			}
			(*n)--;		
		}
	}
	if(flag == -1){
		printf("Khong co mon an trong menu\n");
	}
	for(int i = 0; i < *n; i++){
		printf("%d.%s:%.3f\n", menu[i].id, menu[i].name, menu[i].price);
	}
}
void decrese(struct dish *menu, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(menu[j].price < menu[j + 1].price){
				struct dish temp = menu[j];
				menu[j] = menu[j + 1];
				menu[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d.%s:%.3f\n", menu[i].id,menu[i].name,menu[i].price);
	}
}
void increse(struct dish menu[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(menu[j].price > menu[j + 1].price){
				struct dish temp = menu[j];
				menu[j] = menu[j + 1];
				menu[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d.%s:%.3f\n", menu[i].id,menu[i].name,menu[i].price);
	}
}
void ls(struct dish menu[],int n){
	char dishName[50];	
	printf("Moi ban nhap ten mon an can tim: ");
	fgets(dishName, 50, stdin);
	int len = strlen(dishName);
    if (dishName[len - 1] == '\n') {
        dishName[len - 1] = '\0';
    }
	int flag = -1;
	for(int i = 0; i < n; i++){
		if(strcmp(dishName,menu[i].name) == 0){
			flag = 1;
			printf("Mon an ban tim la: %d.%s:%.3f\n", menu[i].id,menu[i].name,menu[i].price);
		}
	}
	if(flag == -1){
		printf("Khong co mon an trong menu");
	}
}
void bs(struct dish menu[], int n){
	int L = 0, R = 5, M;
	int flag = -1;
	char dishName[50];	
	printf("Moi ban nhap ten mon an can tim: ");
	fgets(dishName, 50, stdin);
	int len = strlen(dishName);
    if (dishName[len - 1] == '\n') {
        dishName[len - 1] = '\0';
    }	
    for(int i = 0; i < n; i++){
    	if(strcmp(menu[i].name, menu[i + 1].name) > 0){
    		struct dish temp = menu[i];
    		menu[i] = menu[i + 1];
    		menu[i + 1] = temp;
		}
	}
	while(L <= R){
		M = (L + R)/2;
		if(strcmp(dishName,menu[M].name)== 0){
			flag = 1;
			printf("Mon an ban tim la: %d.%s:%.3f\n", menu[M].id,menu[M].name,menu[M].price);
			break;
		}
		else if(strcmp(dishName,menu[M].name) < 0){
			R = M - 1;
		}
		else{
			L = M + 1; 
		}	
	}
	if(flag == -1){
		printf("Khong tim thay mon an\n");
	}
}