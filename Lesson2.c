#include <stdio.h>
#include <string.h>


int main(){

    char name[20];
    char registration_number[20];
    int marks[7];
    char courses[7][50] = {
        "Introduction to Computer Systems",
        "Economics",
        "Discreet Math",
        "Introduction to Programming",
        "Something",
        "Something",
        "Something"
    };
    /*
    int age;
    char first_initial;
    float fees;

    printf("Enter your name:");
    scanf("%s", &name );
    printf("Enter age:");
    scanf("%d", &age);
    printf("Enter first initial:");
    scanf(" %c", &first_initial);
    printf("Enter fees:");
    scanf("%f",&fees );
    printf( " My name is: %s \n I am %d years old \n name initial %c \n Fees: %f \n\n\n\n", name, age, first_initial, (int)fees);
    */
    printf("Enter your name:");
    scanf("%s", &name );
    printf("Enter your admission number:");
    scanf("%s", &registration_number);
    for(int i =0; i < 7; i++){
        printf("What did you score in course %s? \n", courses[i]);
        scanf("%d", &marks[i]);
    }
    printf(" \n\nStudent Name: %s \n", name);
    printf("Student Admission Number: %s \n", registration_number);
    printf("\t\t\t Courses and Marks \n\n");
    for(int i = 0; i < 7; i++){
        printf("\t Course %s \t %d \n", courses[i], marks[i]);
    }
}
