#include <stdio.h>

int main() {
    float x, y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    
    printf("Multiplication: %0.2f\n", x *= y);
    printf("Division: %0.2f\n", x /= y);
    
    return 0;
}
