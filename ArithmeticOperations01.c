#include <stdio.h>

void main(){
    int a, b, sum, divide, subtract, multiply;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    sum = a + b;
    subtract = a - b;
    multiply = a * b;
    divide = a /b;
    printf("%d + %d = %d \n\n", a, b, sum);
    printf("%d - %d = %d \n\n", a, b, subtract);
    printf("%d * %d = %d \n\n", a, b, multiply);
    printf("%d / %d = %d \n\n", a,b, divide);

}
