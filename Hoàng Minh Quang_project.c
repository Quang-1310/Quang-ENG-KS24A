#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void loadFile();
void saveFile();
void addBook();
void showBook();
void editBook();
void deleteBook();
void searchTitleName();
void insortBookPrice();
void desortBookPrice();
void checkDataBook();
void saveDataBook();


void loadFileMember();
void saveFileMember();
void addMember();
void showMember();
void editMember();
void editStatus();
void searchMemberName();
void borrowBook();
void returnBook();
void checkDataMember();



struct Date{
	int month, day, year;
};

struct Book{
	int bookId;
	char title[30];
	char author[20];
	int quantity;
	int price;
	struct Date publication;
};
typedef struct Book book;
int numberBook = 0;

struct Member{
	int memberId;
	char name[20];
	char phone[10];
	bool status;
	char s[10];
	int nBB;
	char borrowedBook[50];
	struct Book BorrowedBooks[];
};
typedef struct Member member;
int numberMember = 0;
bool status = true;


int main(){
    FILE *file;
	file = fopen("D:\\Project\\adminDataProject.bin", "wb");
	char account[50] = {"hoangminhquang"};
	char password[50] = {"hoangminhquang123"};
	fwrite(account, sizeof(account), 1, file); 
	fwrite(password, sizeof(password), 1, file);
    fclose(file);
	printf("LOG IN\n");
	char acc[50];
	char pass[50];
	while(1){
		printf("Account: ");
		fgets(acc, sizeof(acc), stdin);
		acc[strcspn(acc, "\n")] = '\0';
		fflush(stdin);	
		printf("Password: ");
		fgets(pass, sizeof(pass), stdin);
		pass[strcspn(pass, "\n")] = '\0';
		fflush(stdin);	
		if(strcmp(acc, account) == 0 && strcmp(pass, password) == 0){			
			break;
		}
		printf("Incorrect Login Information\n");		
	}
	printf("\n\n");
	int chose, chosse;
	char c;
	book a[50];
	int n = numberBook;
	member b[50];
	int m = numberMember;
	loadFile(a,&n);
	loadFileMember(b, &m);		
	do{
	printf("***Book Management System Using C***\n\n");
	printf("\t\tCHOOSE YOUR ROLE\n");
	printf("\t===============================\n");
	printf("\t[1] Book Management\n");
	printf("\t[2] Member Management\n");
	printf("\t[0] Exit the Program\n");
	printf("\t===============================\n");
	printf("\tEnter The Choice: ");
	scanf("%d", &chose);	
		if(chose == 1){
			while(1){
				printf("***Book Management System Using C***\n\n");
				printf("\t    BOOK Management MENU\n");
				printf("\t===============================\n");
				printf("\t[1] Add A New Book\n");
				printf("\t[2] Show All Book\n");
				printf("\t[3] Edit Information Book\n");
				printf("\t[4] Delete Book\n");
				printf("\t[5] Search Name Book\n");
				printf("\t[6] Sort Price Book\n");
				printf("\t[7] Check Data Book\n");
				printf("\t[0] Exit the Program\n");
				printf("\t===============================\n");
				printf("\tEnter The Choice: ");
				scanf("%d",&chosse);
				if(chosse == 1){
					int flagb0 = -1;
					fflush(stdin);
					addBook(a,&n);
					fflush(stdin);
					saveFile(a, n);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}					
				}
				printf("\n");
				if(chosse == 2){
					int flagb0 = -1;
					fflush(stdin);
					showBook(a,&n);
					fflush(stdin);
					saveFile(a, n);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}					
				}
				printf("\n");
				if(chosse == 3){
					int flagb0 = -1;
					fflush(stdin);
					editBook(a,n);
					fflush(stdin);
					saveFile(a, n);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}				
				}
				printf("\n");
				if(chosse == 4){
					int flagb0 = -1;
					fflush(stdin);
					deleteBook(a,&n);
					fflush(stdin);
					saveFile(a, n);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}					
				}
				printf("\n");
				if(chosse == 5){
					int flagb0 = -1;
					fflush(stdin);
					searchTitleName(a,n);
					fflush(stdin);
					saveFile(a, n);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}					
				}
				printf("\n");
				if(chosse == 6){
					int flagb0 = -1;
					fflush(stdin);
					char q;
					printf("A.Sort Books By Price Ascending\n");
					printf("B.Sort Books By Price Descending\n");
					printf("Enter The Choice: ");
					scanf("%c", &q);
					if(q == 'A' || q == 'a'){
						insortBookPrice(a,n);
					}
					else if(q == 'B' || q == 'b'){
						desortBookPrice(a,n);
					}					
					fflush(stdin);					
					saveFile(a, n);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}						
				}
				printf("\n");
				if(chosse == 7){
					int flagb0 = -1;
					fflush(stdin);
					checkDataBook(a,n);
					fflush(stdin);
					saveFile(a, n);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}					
				}
				printf("\n");	
				if(chosse == 0){
					break;
				}
			}			
		}
		if(chose == 2){			
			while(1){
				printf("***Customer Management System Using C***\n\n");
				printf("\t    Customer Management MENU\n");
				printf("\t===============================\n");
				printf("\t[1] Add A New Member\n");
				printf("\t[2] Show All Member\n");
				printf("\t[3] Edit Information Member\n");
				printf("\t[4] Lock (Unlock) Member\n");
				printf("\t[5] Search Name Member\n");
				printf("\t[6] Borrow Books To Members\n");
				printf("\t[7] Returning Borrowed Books\n");
				printf("\t[8] Check Data Member\n");
				printf("\t[0] Exit the Program\n");
				printf("\t===============================\n");
				printf("\tEnter The Choice: ");
				scanf("%d",&chosse);
				if(chosse == 1){
					int flagb0 = -1;
					fflush(stdin);
					addMember(b,&m);
					fflush(stdin);
					saveFileMember(b, m);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}
				}
				printf("\n");
				if(chosse == 2){
					int flagb0 = -1;
					fflush(stdin);
					showMember(b,&m);
					fflush(stdin);
					saveFileMember(b, m);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}
				}
				printf("\n");
				if(chosse == 3){
					int flagb0 = -1;
					fflush(stdin);
					editMember(b,m);
					fflush(stdin);
					saveFileMember(b, m);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}
				}
				printf("\n");
				if(chosse == 4){
					int flagb0 = -1;
					fflush(stdin);
					editStatus(b,m);
					fflush(stdin);
					saveFileMember(b, m);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}
				}
				printf("\n");
				if(chosse == 5){
					int flagb0 = -1;
					fflush(stdin);
					searchMemberName(b,m);
					fflush(stdin);
					saveFileMember(b, m);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}					
				}
				printf("\n");
				if(chosse == 6){
					int flagb0 = -1;
					fflush(stdin);
					borrowBook(b,m, a,n);
					fflush(stdin);
					saveFileMember(b, m);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}
				}
				printf("\n");
				if(chosse == 7){
					int flagb0 = -1;
					fflush(stdin);
					returnBook(b,m, a,n);
					fflush(stdin);
					saveFileMember(b, m);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}
				}
				printf("\n");
				if(chosse == 8){
					int flagb0 = -1;
					fflush(stdin);
					checkDataMember(b, m);
					fflush(stdin);
					saveFileMember(b, m);
					while(1){
						printf("Go back(b)? or Exit(0)? : ");
						scanf("%c", &c);
						fflush(stdin);
						if(c == '0'){
							flagb0 = 1;
							break;
						}
						else if(c == 'b'){
							break;
						}
					}
					if(flagb0 == 1){
						break;
					}	
				}
				if(chosse == 0){
					break;
				}
			}
		}
	}while(chose != 0);
	return 0;
}


void addBook(book *a, int *n){
	a[*n].bookId = *n + 1;
	printf("Enter New Book Information: \n");
	printf("Enter The Title: ");
	fgets(a[*n].title,sizeof(a[*n].title),stdin);
	a[*n].title[strcspn(a[*n].title, "\n")] = '\0';
	fflush(stdin);
	
	printf("Enter Author Name: ");
	fgets(a[*n].author,sizeof(a[*n].author),stdin);
	a[*n].author[strcspn(a[*n].author, "\n")] = '\0';
	fflush(stdin);
	
	printf("Enter Quantity: ");
	scanf("%d", &a[*n].quantity);
	fflush(stdin);
	
	printf("Enter Price: ");
	scanf("%d", &a[*n].price);
	fflush(stdin);
	printf("Enter Publication Day: ");
	scanf("%d",&a[*n].publication.day);
	fflush(stdin);
	
	printf("Enter Publication Month: ");
	scanf("%d",&a[*n].publication.month);
	fflush(stdin);
	
	printf("Enter Publication Year: ");
	scanf("%d",&a[*n].publication.year);
	fflush(stdin);
	
	(*n)++;
	printf("Book Added Successfully!!!\n");	

}

void showBook(book a[], int *n){
	if (*n == 0) {
    	printf("There Are No Books In The List!\n");
    	return;
    }
	printf("***All Book****\n");			
   	printf("|==========|=======================|==================|==========|=========|=============|\n");
    printf("|    ID    |          Title        |      Author      | Quantity |  Price  | Publication |\n");
    printf("|==========|=======================|==================|==========|=========|=============|\n");

    for (int i = 0; i < *n; i++) {
        printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
		printf("|----------|-----------------------|------------------|----------|---------|-------------|\n");                                                                                       
    }	
}

void editBook(book *a, int n){
	int idEdit;
	int flag = -1;
	printf("Enter the ID You Want To Edit: ");
	scanf("%d", &idEdit);
	fflush(stdin);
 	
	for(int i = 0; i < n; i++){
		if(idEdit == a[i].bookId){
			flag = 1;
			printf("Book Information Not Edited:\n");
   			printf("|==========|=======================|==================|==========|=========|=============|\n");
    		printf("|    ID    |          Title        |      Author      | Quantity |  Price  | Publication |\n");
    		printf("|==========|=======================|==================|==========|=========|=============|\n");
			printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
			printf("|----------|-----------------------|------------------|----------|---------|-------------|\n");			
			printf("New Title Book: ");
			fgets(a[idEdit - 1].title, 50, stdin);
			a[idEdit - 1].title[strcspn(a[idEdit - 1].title, "\n")] = '\0';
			fflush(stdin);
			printf("New Name Author: ");
			fgets(a[idEdit - 1].author, 50, stdin);
			a[idEdit - 1].author[strcspn(a[idEdit - 1].author, "\n")] = '\0';
			fflush(stdin);
			printf("New Quantity: ");
			scanf("%d", &a[idEdit - 1].quantity);
			fflush(stdin);
			printf("New Price: ");
			scanf("%d", &a[idEdit - 1].price);
			
			printf("Enter Publication Day: ");
			scanf("%d",&a[idEdit - 1].publication.day);
			fflush(stdin);
	
			printf("Enter Publication Month: ");
			scanf("%d",&a[idEdit - 1].publication.month);
			fflush(stdin);
	
			printf("Enter Publication Year: ");
			scanf("%d",&a[idEdit - 1].publication.year);
			fflush(stdin);
			
			printf("Edit Book Information Successfully!!!\n");
		}
	}
	if(flag == -1){
		printf("The Book ID You Are Looking For Does Not Exist.\n");
	}
	
}

void deleteBook(book *a, int *n){
	int deleteId;
	int flag = -1;
	char d;
	printf("Enter The Book Id You Want To Delete: ");
	scanf("%d", &deleteId);
	fflush(stdin);
	for(int i = 0; i < *n; i++){
		if(a[i].bookId == deleteId){				
			flag = 1;
			printf("The Book ID You Are Looking For Has Been Found.\n");
			printf("ID: %d\n", a[i].bookId);
			printf("Title: %s\n", a[i].title);
			printf("Author: %s\n", a[i].author);
			printf("Quantity: %d\n", a[i].quantity);
			printf("Price: %d\n", a[i].price);	
			printf("Are You Sure You Want To Delete?\n");
			printf("Yes(Y) or No(N): ");
			scanf("%c", &d);
			fflush(stdin);
			if(d == 'Y' || d == 'y'){
				for(int j = deleteId - 1; j < *n; j++){
					a[j] = a[j + 1];
				}
				(*n)--;	
				printf("Delete Book Successfully!!!\n");
				return;
			}
			else if(d == 'N' || d == 'n'){
				printf("Deletion Canceled!!!\n");
				return;
			}	
		}		
	}	
	if(flag == -1){
		printf("The Book ID You Are Looking For Does Not Exist.\n");
	}		
}

void searchTitleName(book a[], int n){
	char searchName[100];
	char lower[30];
	char lower1[30];
	int flag = -1;
	printf("Enter The Title Of The Book You Are Looking For: ");
	fgets(searchName, sizeof(searchName), stdin);
	searchName[strcspn(searchName,"\n")] = '\0';
	strcpy(lower1, searchName);
	fflush(stdin);	
	printf("*** Search Results ***\n");
   	printf("|==========|=======================|==================|==========|=========|=============|\n");
    printf("|    ID    |          Title        |      Author      | Quantity |  Price  | Publication |\n");
    printf("|==========|=======================|==================|==========|=========|=============|\n");	
	for(int i = 0; i < n; i++){	
		strcpy(lower, a[i].title);			
		if(strstr(strlwr(lower), strlwr(lower1)) != NULL){
			flag = 1;
        	printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
			printf("|----------|-----------------------|------------------|----------|---------|-------------|\n"); 		
		}
	} 
	if(flag == -1){
		printf("The Book You Are Looking For Could Not Be Found.\n");
	}	
}

void insortBookPrice (book *a, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j].price > a[j + 1].price){
				book temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("Sort Books By Price Ascending Successfully!!!\n");
}

void desortBookPrice (book *a, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j].price < a[j + 1].price){
				book temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("Sort Books By Price Descending Successfully!!!\n");
}

void checkDataBook(book *a, int n){
	for(int i = 0; i < n; i++){
		if(strlen(a[i].title) >= 20){ 
			printf("Book Title Length Exceeds Allowed Number\n");
			printf("Please Re-enter Book Name\n");
			printf("Enter The Title: ");
			fgets(a[i].title, 30, stdin);
			a[i].title[strcspn(a[i].title, "\n")] = '\0';
			fflush(stdin);
		}
		else if(strlen(a[i].author) >= 15){
			printf("Author Name Length Exceeds Allowed Number\n");
			printf("Please Re-enter Author Name\n");
			printf("Enter The Author Name: ");
			fgets(a[i].author, 20, stdin);
			a[i].author[strcspn(a[i].author, "\n")] = '\0';
			fflush(stdin);
		}
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[i].title, a[j].title) == 0){ 
				printf("Book Title Are Duplicate\n");
    			printf("|==========|=======================|==================|==========|=========|\n");
    	        printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
				printf("|----------|-----------------------|------------------|----------|---------|-------------|\n"); 
        		printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
				printf("|----------|-----------------------|------------------|----------|---------|-------------|\n"); 
				printf("Re-enter The Book Title With ID %d: ",a[i].bookId);
				fgets(a[i].title, 50, stdin);
				a[i].title[strcspn(a[i].title, "\n")] = '\0';
				fflush(stdin);
				printf("Re-Enter Author Name With ID %d: ",a[i].bookId);
				fgets(a[i].author,sizeof(a[i].author),stdin);
				a[i].author[strcspn(a[i].author, "\n")] = '\0';
				fflush(stdin);	
				printf("Re-Enter Quantity With ID %d: ",a[i].bookId);
				scanf("%d", &a[i].quantity);
				fflush(stdin);	
				printf("Re-Enter Price With ID %d: ",a[i].bookId);
				scanf("%d", &a[i].price);
				fflush(stdin);
				printf("Re-enter The Book Title With ID %d: ",a[j].bookId);
				fgets(a[j].title, 50, stdin);
				a[j].title[strcspn(a[j].title, "\n")] = '\0';
				fflush(stdin);		
				printf("Re-Enter Author Name With ID %d: ",a[j].bookId);
				fgets(a[j].author,sizeof(a[j].author),stdin);
				a[j].author[strcspn(a[j].author, "\n")] = '\0';
				fflush(stdin);	
				printf("Re-Enter Quantity With ID %d: ",a[j].bookId);
				scanf("%d", &a[j].quantity);
				fflush(stdin);	
				printf("Re-Enter Price With ID %d: ",a[j].bookId);
				scanf("%d", &a[j].price);	
				fflush(stdin);	
			}
		}		   
       	if (strlen(a[i].title) == 0){   
            printf("The Title Of Book ID %d Is Empty.\n", a[i].bookId); 
   			printf("|==========|=======================|==================|==========|=========|=============|\n");
    		printf("|    ID    |          Title        |      Author      | Quantity |  Price  | Publication |\n");
    		printf("|==========|=======================|==================|==========|=========|=============|\n");
			printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
			printf("|----------|-----------------------|------------------|----------|---------|-------------|\n");	          
            printf("Please Re-enter The Title: ");
            fgets(a[i].title, sizeof(a[i].title), stdin);
            a[i].title[strcspn(a[i].title, "\n")] = '\0';
            fflush(stdin);
        }
        else if (strlen(a[i].author) == 0){ 
           	printf("The Author Of Book ID %d Is Empty.\n", a[i].bookId);
   			printf("|==========|=======================|==================|==========|=========|=============|\n");
    		printf("|    ID    |          Title        |      Author      | Quantity |  Price  | Publication |\n");
    		printf("|==========|=======================|==================|==========|=========|=============|\n");
			printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
			printf("|----------|-----------------------|------------------|----------|---------|-------------|\n");	          	
           	printf("Please Re-enter The Author: ");
            fgets(a[i].author, sizeof(a[i].author), stdin);
            a[i].author[strcspn(a[i].author, "\n")] = '\0';
            fflush(stdin);
        }		
        
        for(int j = 0; j < strlen(a[i].title); j++){
        	if(a[i].title[j] >= 0 && a[i].title[j] < 65 || a[i].title[j] > 90 && a[i].title[j] < 96 || a[i].title[j] > 122){
    			printf("|==========|=======================|==================|==========|=========|=============|\n");
   				printf("|    ID    |          Title        |      Author      | Quantity |  Price  | Publication |\n");
    			printf("|==========|=======================|==================|==========|=========|=============|\n");
       			printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
				printf("|----------|-----------------------|------------------|----------|---------|-------------|\n"); 
        		printf("Book Title Has Invalid ID %d. Please Re-enter Book Title: ", a[i].bookId);
        		fgets(a[i].title, sizeof(a[i].title), stdin);
        		a[i].title[strcspn(a[i].title, "\n")] = '\0';
        		fflush(stdin);
        		printf("Book Title Update Successfully!!!\n");
        	}
		}	
		for(int j = 0; j < strlen(a[i].author); j++){	
        	if(a[i].author[j] >= 0 && a[i].author[j] < 65 || a[i].author[j] > 90 && a[i].author[j] < 96 || a[i].author[j] > 122){
   				printf("|==========|=======================|==================|==========|=========|=============|\n");
    			printf("|    ID    |          Title        |      Author      | Quantity |  Price  | Publication |\n");
    			printf("|==========|=======================|==================|==========|=========|=============|\n");
        		printf("| %-8d | %-21s | %-16s | %-8d | %-7d | %-2d/%-2d/%-4d  |\n",a[i].bookId, a[i].title, a[i].author, a[i].quantity, a[i].price, a[i].publication.day, a[i].publication.month, a[i].publication.year); 
				printf("|----------|-----------------------|------------------|----------|---------|-------------|\n"); 
        		printf("The Author Name of Book With ID %d Is Invalid. Please Re-enter Author Name: ", a[i].bookId);
        		fgets(a[i].author, sizeof(a[i].author), stdin);
        		a[i].author[strcspn(a[i].author, "\n")] = '\0';
        		fflush(stdin);
        		printf("Author Name Updated Successfully!!!\n");
			}			
		}
	}
}


void loadFile(book a[], int *n) {
    FILE *file;
	file = fopen("D:\\Project\\bookDataProject.bin", "rb");
    if (file == NULL) {
        printf("Cannot Open File Book ! \n");
        return;
    }
    *n = fread(a, sizeof(book), 50, file); 
    fclose(file);
   
}

void saveFile(book a[], int n) {
    FILE *file;
	file = fopen("D:\\Project\\bookDataProject.bin", "wb");
    if (file == NULL) {
       	printf("Cannot Open File Book ! \n");
        return;
    }
    fwrite(a, sizeof(book), n, file); 
    fclose(file);    
}


void addMember(member *b, int *m){
	b[*m].memberId = *m + 1;
	printf("Enter New Member Information: \n");
	printf("Enter The Name: ");
	fgets(b[*m].name,sizeof(b[*m].name),stdin);
	b[*m].name[strcspn(b[*m].name, "\n")] = '\0';
	fflush(stdin);	
	printf("Enter Phonenumber: ");
	fgets(b[*m].phone,sizeof(b[*m].phone),stdin);
	b[*m].phone[strcspn(b[*m].phone, "\n")] = '\0';
	fflush(stdin);	
		b[*m].nBB = 0;
    if (status){
        strcpy(b[*m].s, "Unlock"); 
    }
	else{
        strcpy(b[*m].s, "Lock");   
    }	
	strcpy(b[*m].borrowedBook,"No Borrowing Books");	
	(*m)++;
	printf("Member Added Successfully!!!\n");	

}

void showMember(member b[], int *m){
	if (*m == 0) {
    	printf("There Are No Members In The List!\n");
    	return;
    }
	printf("***All Member****\n");			
   	printf("|==========|=======================|==================|==================|=======================|===================|\n");
    printf("|    ID    |          Name         |      Phone       |      Status      | Number Books Borrowed |  BorrowedBooks    |\n");
    printf("|==========|=======================|==================|==================|=======================|===================|\n");
	for(int i = 0; i < *m; i++){
		printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[i].memberId, b[i].name, b[i].phone, b[i].s, b[i].nBB, b[i].borrowedBook);
		printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n");
	}	
}

void editMember(member *b, int m){
	int flag = -1;
	int idEditMember;
	printf("Enter the ID You Want To Edit: ");
	scanf("%d", &idEditMember);
	fflush(stdin);
	for(int i = 0; i < m; i++){
		if(idEditMember == b[i].memberId){
			flag = 1;
			printf("New Name Member: ");
			fgets(b[i].name, sizeof(b[i].name), stdin);
			b[i].name[strcspn(b[i].name, "\n")] = '\0';
			fflush(stdin);
			printf("New Phone Member: ");
			fgets(b[i].phone, sizeof(b[i].phone), stdin);
			b[i].phone[strcspn(b[i].phone, "\n")] = '\0';
			fflush(stdin);
			printf("Edit Member Information Successfully!!!\n");
		}
	}
	if(flag == -1){
		printf("The Member ID You Are Looking For Does Not Exist.\n");
	}
}

void editStatus(member *b, int m){
	char s;
	int flag = -1;
	int idEditStatus;
	printf("Enter The ID You Want To Edit: ");
	scanf("%d", &idEditStatus);
	fflush(stdin);
	for(int i = 0; i < m; i++){
		if(idEditStatus == b[i].memberId){
			flag = 1;
			if(strcmp(b[i].s, "Unlock") == 0){
				printf("Are You Sure You Want To Change Status To Locked? Yes(Y) or No(N): ");
				scanf("%c",&s);		
				fflush(stdin);
				if(s == 'Y' || s == 'y'){
					strcpy(b[i].s, "Lock");
					printf("Status Update Successful!!!\n");
				}
				else if(s == 'N' || s == 'n'){
					printf("No Status Update!!!\n");
					break;
				}		
			}
			else if(strcmp(b[i].s, "Lock") == 0){
				printf("Are You Sure You Want To Change Status To Unlocked? Yes(Y) or No(N): ");
				scanf("%c",&s);		
				fflush(stdin);
				if(s == 'Y' || s == 'y'){
					strcpy(b[i].s, "Unlock");
					printf("Status Update Successful!!!\n");
				}
				else if(s == 'N' || s == 'n'){
					printf("No Status Update!!!\n");
					break;
				}
			}
		}
	}		
	if(flag == -1){
		printf("The Member ID You Are Looking For Does Not Exist.\n");
	}	
}

void searchMemberName(member b[], int m){
	char searchMemberName[50];
	char lower[50];
	char lower1[50];
	int flag = -1;
	printf("Enter The Name of the Member You Want to Find: ");
	fgets(searchMemberName, sizeof(searchMemberName), stdin);
	searchMemberName[strcspn(searchMemberName,"\n")] = '\0';
	strcpy(lower, searchMemberName);
	fflush(stdin);
	printf("*** Search Results ***\n");
   	printf("|==========|=======================|==================|==================|=======================|===================|\n");
    printf("|    ID    |          Name         |      Phone       |      Status      | Number Books Borrowed |  BorrowedBooks    |\n");
    printf("|==========|=======================|==================|==================|=======================|===================|\n");
	for(int i = 0; i < m; i++){	
		strcpy(lower1 ,b[i].name);	
		if(strstr(strlwr(lower), strlwr(lower1)) != NULL){
			flag = 1;
			printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[i].memberId, b[i].name, b[i].phone, b[i].s, b[i].nBB, b[i].borrowedBook);
			printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n");		
		}
	} 
	if(flag == -1){
		printf("The Member You Are Looking For Could Not Be Found.\n");
	}	
}

void borrowBook(member b[], int m, book *a, int n){
	int idMember;
	int idBook;
	int numberBook;
	int flag = -1;
	printf("Enter The Member ID Who Wants to Borrow the Book: ");
	scanf("%d", &idMember);
	for(int i = 0; i < m ; i++){
		if(idMember == b[i].memberId){
			flag = 1;
			if(strcmp(b[i].s, "Lock") == 0){
				printf("You Are Locked And Unable To Borrow Books.\n");
				break;
			}
			else{
				printf("Enter the Book ID Want to Borrow: ");
				scanf("%d", &idBook);
				for(int j = 0; j < n; j++){
					if(idBook == a[j].bookId){
						printf("Enter Number Of Books Want To Borrow: ");
						scanf("%d", &numberBook);
						if(numberBook > 0 && numberBook <= a[j].quantity && numberBook <= 5){
							printf("Borrow Books Successfully!!!\n");
							a[j].quantity -= numberBook;
							b[i].nBB = numberBook;
							strcpy(b[i].borrowedBook, a[j].title);
							strcpy(b[i].s, "Lock");
							break;
						}
						else if(numberBook > a[j].quantity){
							printf("Insufficient Number Of Books in The Library!!!\n");
						}
						else if(numberBook > 5){
							printf("You Can Only Borrow a Maximum of 5 Books!\n");
							break;
						}
						else{
							printf("Number of Books That Do Not Exist!\n");
							break;
						}
					}
					else{
						printf("The Book ID You Are Looking For Cannot Be Found.\n");
						break;
					}
				}
			}
		}
	}
	if(flag == -1){
		printf("Can't Find The Member You're Looking For\n");
	}	
}

void returnBook(member b[], int m, book *a, int n){
	int idMember;
	int idBook;
	int flag = -1;
	int flag1 = -1;
	int numberBook;
	printf("Enter The Member ID Who Wants to Return the Book: ");
	scanf("%d", &idMember);
	for(int i = 0; i < m ; i++){
		if(idMember == b[i].memberId){
			flag = 1;
			printf("Enter the Book ID You Want to Return: ");
			scanf("%d", &idBook);
			for(int j = 0; j < n; i++){
				if(idBook == a[j].bookId){
					printf("Enter Number Of Books Want To Borrow: ");
					scanf("%d", &numberBook);
					flag1 = 1;
					if(numberBook >= 0 && numberBook <= 5){
						strcpy(b[i].s, "Unlock");
						a[j].quantity += numberBook;
						b[i].nBB = 0;
						strcpy(b[i].borrowedBook,"No Borrowing Books");
						printf("Return Books Successfully!!!\n");
						break;
					}
					else{
						printf("Invalid Returned Book Quantity!\n");
						break;
					}
				}
			}
			if(flag1 == -1){
				printf("The Book ID You Are Looking For Cannot Be Found.\n");
				break;
			}	
		}
	}
	if(flag == -1){
		printf("Can't Find The Member You're Looking For\n");
	}
}

void checkDataMember(member *b, int m){
	for(int i = 0; i < m; i++){
		if(strlen(b[i].name) >= 15){ 
			printf("Customer Name With ID %d Length Too Long\n", b[i].memberId);
   			printf("|==========|=======================|==================|==================|=======================|===================|\n");
    		printf("|    ID    |          Name         |      Phone       |      Status      | Number Books Borrowed |  BorrowedBooks    |\n");
    		printf("|==========|=======================|==================|==================|=======================|===================|\n");
			printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[i].memberId, b[i].name, b[i].phone, b[i].s, b[i].nBB, b[i].borrowedBook);
			printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n");			
			printf("Please Re-enter Name\n");
			printf("Enter The Name: ");
			fgets(b[i].name, 20, stdin);
			b[i].name[strcspn(b[i].name, "\n")] = '\0';
			printf("Name Member Update Successfully!!!\n");
			fflush(stdin);
		}
		for(int j = 0; j < strlen(b[i].name); j++){
        	if(b[i].name[j] >= 0 && b[i].name[j] < 65 || b[i].name[j] > 90 && b[i].name[j] < 96 || b[i].name[j] > 122){
   				printf("|==========|=======================|==================|==================|=======================|===================|\n");
    			printf("|    ID    |          Name         |      Phone       |      Status      | Number Books Borrowed |  BorrowedBooks    |\n");
    			printf("|==========|=======================|==================|==================|=======================|===================|\n");
				printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[i].memberId, b[i].name, b[i].phone, b[i].s, b[i].nBB, b[i].borrowedBook);
				printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n");	
        		printf("Name Member Has Invalid ID %d. Please Re-enter Name Member: ", b[i].memberId);
        		fgets(b[i].name, sizeof(b[i].name), stdin);
        		b[i].name[strcspn(b[i].name, "\n")] = '\0';
        		fflush(stdin);
        		printf("Name Member Update Successfully!!!\n");
        	}
		}
		for(int j = 0; j < strlen(b[i].phone); j++){		
        	if(b[i].phone[j] >= 0 && b[i].phone[j] < 48 || b[i].phone[j] > 57){
   				printf("|==========|=======================|==================|==================|=======================|===================|\n");
    			printf("|    ID    |          Name         |      Phone       |      Status      | Number Books Borrowed |  BorrowedBooks    |\n");
    			printf("|==========|=======================|==================|==================|=======================|===================|\n");
				printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[i].memberId, b[i].name, b[i].phone, b[i].s, b[i].nBB, b[i].borrowedBook);
				printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n");	 
        		printf("The Phone With ID %d Is Invalid. Please Re-enter Phone: ", b[i].memberId);
        		fgets(b[i].phone, sizeof(b[i].phone), stdin);
        		b[i].phone[strcspn(b[i].phone, "\n")] = '\0';
        		fflush(stdin);
        		printf("Phone Updated Successfully!!!\n");
			}						
		}
		for(int j = i + 1; j < m; j ++){
			if(strcmp(b[i].phone, b[j].phone) == 0){ 
				printf("Duplicate Phone Numbers\n");
    			printf("|==========|=======================|==================|==================|=======================|===================|\n");
				printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[i].memberId, b[i].name, b[i].phone, b[i].s, b[i].nBB, b[i].borrowedBook);
				printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n");
				printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[j].memberId, b[j].name, b[j].phone, b[j].s, b[j].nBB, b[j].borrowedBook);
				printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n"); 
				printf("Re-enter The Phone With ID %d: ",b[i].memberId);
				fgets(b[i].phone, 10, stdin);
				b[i].phone[strcspn(b[i].phone, "\n")] = '\0';
				fflush(stdin);
				printf("Re-enter The Phone With ID %d: ",b[j].memberId);
				fgets(b[j].phone, 10, stdin);
				b[j].phone[strcspn(b[j].phone, "\n")] = '\0';
				fflush(stdin);
			}
		}
		if (strlen(b[i].name) == 0){   
            printf("The Member Name With ID %d Is Empty.\n", b[i].memberId); 
   			printf("|==========|=======================|==================|==================|=======================|===================|\n");
    		printf("|    ID    |          Name         |      Phone       |      Status      | Number Books Borrowed |  BorrowedBooks    |\n");
    		printf("|==========|=======================|==================|==================|=======================|===================|\n");
			printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[i].memberId, b[i].name, b[i].phone, b[i].s, b[i].nBB, b[i].borrowedBook);
			printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n");            
            printf("Please Re-enter Name: ");
            fgets(b[i].name, sizeof(b[i].name), stdin);
            b[i].name[strcspn(b[i].name, "\n")] = '\0';
            fflush(stdin);
        }
        else if (strlen(b[i].phone) == 0){ 
           	printf("Member Phone Number With ID 3 %d Is Empty.\n", b[i].memberId);
   			printf("|==========|=======================|==================|==================|=======================|===================|\n");
    		printf("|    ID    |          Name         |      Phone       |      Status      | Number Books Borrowed |  BorrowedBooks    |\n");
    		printf("|==========|=======================|==================|==================|=======================|===================|\n");
			printf("| %-8d | %-21s | %-16s | %-16s | %-21d | %-18s|\n",b[i].memberId, b[i].name, b[i].phone, b[i].s, b[i].nBB, b[i].borrowedBook);
			printf("|----------|-----------------------|------------------|------------------|-----------------------|-------------------|\n");           	
           	printf("Please Re-enter The Phone: ");
            fgets(b[i].phone, sizeof(b[i].phone), stdin);
            b[i].phone[strcspn(b[i].phone, "\n")] = '\0';
            fflush(stdin);
        }
	}
}


void loadFileMember(book b[], int *m){
    FILE *file;
	file = fopen("D:\\Project\\memberDataProject.bin", "rb");
    if (file == NULL) {
        printf("Cannot Open File Member ! \n");
        return;
    }
    *m = fread(b, sizeof(member), 50, file); 
    fclose(file);
   
}

void saveFileMember(book b[], int m) {
    FILE *file;
	file = fopen("D:\\Project\\memberDataProject.bin", "wb");
    if (file == NULL) {
       	printf("Cannot Open File Member ! \n");
        return;
    }
    fwrite(b, sizeof(member), m, file); 
    fclose(file);    
}









