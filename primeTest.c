#include <stdio.h>

int get_arr_size(int a[]){
    int size = sizeof(a)/sizeof(int);
    return size;
}

void main(){
    int a, not_divisors = 0, number_of_divisors =0;
    printf("Enter the number you want tested: \n");
    scanf("%d",&a);
    int divisors[a];
    for(int i = 2; i < a; i++){
        float n;
        n = a%i;
        printf("%f \n",n);
        if(n != (float)0){
            not_divisors++;
        }if(n == (float)0){
            divisors[number_of_divisors] = i;
            number_of_divisors++;
        }
    }
    if(not_divisors == (a-2)){
        printf("\n%d is a prime number.", a);
    }else if(number_of_divisors != 0){
        get_arr_size(divisors);
        printf("\n %d is not a prime number. \n", a);
        printf("And here are its divisors: \n");
        for(int i = 0; i < number_of_divisors; i++){
            printf("-> %d \n", divisors[i]);
        }
    }
}
