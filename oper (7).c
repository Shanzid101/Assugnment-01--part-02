#include <stdio.h>

int main() {
    int x;
    float y;
    
    printf("Enter an integer and a floating number: ");
    scanf("%d %f", &x, &y);
    
    printf("Assignment: %.6f assigned to an int produces %d\n", y, (int)y);
    printf("Assignment: %d assigned to a float produces %0.6f\n", x, (float)x);
    printf("Type Casting: (float) %d produces %0.6f\n", x, (float)x);
    printf("Type Casting: (int) %0.6f produces %d\n", y, (int)y);
    
    return 0;
}
