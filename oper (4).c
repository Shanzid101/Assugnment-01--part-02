#include <stdio.h>

int main() {
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    
    printf("X++ : %d\n", num1++);
    printf("++X : %d\n", ++num1);
    printf("X-- : %d\n", num1--);
    printf("--X : %d\n", --num1);
    
    return 0;
}
