#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int x = a - b / 3 + c * 2 - 1;
    printf("X = %d\n", x);

    int y = a - (b / (3 + c) * 2) - 1;
    printf("Y = %d\n", y);
    
    int z = a - ((b / 3) + c * 2) - 1;
    printf("Z = %d\n", z);
    
    return 0;
}
