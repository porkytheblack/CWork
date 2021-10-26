#include <stdio.h>
#include <math.h>
#define KSH_TO_USD 0.0090

void main(){
    int amount;
    float in_usd;
    printf("Enter the amount of KSH you would like to be converted: \n");
    scanf("%d", &amount);
    in_usd = (float)amount * KSH_TO_USD;

    printf("%d KSH is equivalent to %f USD", amount , in_usd);
}
