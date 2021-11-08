#include <stdio.h>

void main(){
    int i = 0;
    int n  = 0;
    char course_names[7][50] = {
        "Programming Lab",
        "Discreet Math",
        "Introduction to Computing",
        "Physics for Computing",
        "Economics",
        "Communication Skills",
        "Introduction to programming"
    };
    int course_grades[7];
    while(i < 7){
        printf("Enter your marks is %s: \n", course_names[i]);
        scanf("%d", &course_grades[i]);
        i++;
    }
    printf("\t\t\tYour Marks\n");
    while(n < 7){
        printf(" %s \t\t\t %d \n", course_names[n], course_grades[n]);
        n++;
    }
}
