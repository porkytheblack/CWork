#include <stdio.h>

void main(){
    int age, weight;
    char name[20];

    printf("Enter your name: \n");
    scanf("%s", name);
    printf("\nEnter your age: \n");
    scanf("%d", &age);
    printf("\nEnter your weight; \n");
    scanf("%d", &weight);

    printf("My Name is %s I am %d years old and I weigh %d Kilograms", name, age, weight);
}

