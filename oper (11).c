#include <stdio.h>

int main() {
    int x, y, z;
    int result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x <y) {
        result = 1;
    } else {
        result = 0;
    }
    printf("(1) %d\n", result);
    
    if (y < z) {
        result = 1;
    } else {
        result = 0;
    }
    printf("(2) %d\n", result);
    
    if (x != z) {
        result = 1;
    } else {
        result = 0;
    }
    printf("(3) %d\n", result);
    
    return 0;
}