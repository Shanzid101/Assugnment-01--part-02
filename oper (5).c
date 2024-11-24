#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);
    
    x += y;
    printf("Incremented Value: %d\n", x);
    
    x -= y;
    printf("Decremented Value: %d\n", x);
    
    return 0;
}
