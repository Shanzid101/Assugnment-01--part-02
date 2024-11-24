#include <stdio.h>

int main() {
    int a,b,sum;
    printf("Enter two value for x (1 <= x <= 180): ");
    scanf("%d %d", &a, &b);
    
    sum=(a*a)+2*(a*b)+(b*b);
    printf("Result: %d\n",sum);
    
    return 0;
}
