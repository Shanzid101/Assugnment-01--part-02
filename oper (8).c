#include <stdio.h>

int main() {
    int x, y, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    if(x > y)
        printf("Max: %d\n",x);
    else if (y>x)
        printf("Max: %d\n", y);
    else
        printf("Not exist Max value!,both are equal");
    
    return 0;
}
