#include <stdio.h>

void main(){
    int n, fact;
    printf("Enter a number: \n");
    scanf("%d", &n);
    fact = n;
    for(int i = 1; i < fact; i++){
        n *= i;
    }

    printf("%d! is  %d",fact, n );
}
