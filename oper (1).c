#include <stdio.h>

int main() {
 double x,y;
 printf("Enter two number:");
 scanf("%lf %lf",&x, &y);

 printf("Adiition(x+y)=%0.2lf\n",x+y);
 printf("Subtraction(x-y)=%0.2lf\n",x-y);
 printf("Multiplication(x*y)=%0.2lf\n",x*y);

if (y!=0)
{
    printf("Division(x/y)=%0.2lf\n",x/y);
    printf("Remainder(x%%y)=%0.2lf\n",(int)x%(int)y);
}
else
    printf("Division and Remainder is not possible");
 
 
    return 0;
}