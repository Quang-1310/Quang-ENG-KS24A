#include <stdio.h>  
int ucln(int a, int b) {  
    if (b == 0)  
        return a;  
    return ucln(b, a % b);  
}  

int main() {  
    int number1, number2;  
    printf("Moi ban nhap so nguyen thu 1: ");  
    scanf("%d", &number1);  
    printf("Moi ban nhap so nguyen thu 2: ");  
    scanf("%d", &number2);   
    int result = ucln(number1, number2);  
    printf("Uoc chung lon nhat cua %d va %d: %d\n", number1, number2, result);  
    return 0;  
}