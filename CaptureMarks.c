#include <stdio.h>

void main(){
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
    for(int i = 0; i < 7; i++){
        printf("Enter your marks is %s: \n", course_names[i]);
        scanf("%d", &course_grades[i]);
    }
    printf("\t\t\tYour Marks\n");
    for(int i = 0; i < 7; i++){
        printf(" %s \t\t\t %d \n", course_names[i], course_grades[i]);

    }
}
