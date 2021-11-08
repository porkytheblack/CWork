#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

void main(){
    int number_of_students, i =0, j =0;
    struct student {
        char first_name[20];
        char last_name[20];
        int age;
        int marks[7];
    };
    char course_names[7][50] = {
        "Programming Lab",
        "Discreet Math",
        "Introduction to Computing",
        "Physics for Computing",
        "Economics",
        "Communication Skills",
        "Introduction to programming"
    };

    printf("Enter the number of students: \n");
    scanf("%d", &number_of_students);
    struct student students[number_of_students];
    while(i < number_of_students){
        printf("Enter the student's %d's first name: \n", i+1 );
        scanf("%s",students[i].first_name );
        printf("Enter the student's %d's last name: \n", i+1 );
        scanf("%s",students[i].last_name );
        i++;
        /*
        while(j < 7){
            printf("Enter %s's marks in %s \n", students[i].first_name, course_names[j]);
            scanf("%d", &students[i].marks[j]);
            j++;
        }
        i++;
        */
    }

    i, j= 0;

    fptr = fopen(".1student_info.txt", "a");
    while(i < number_of_students){
        fprintf(fptr, "%3d, %10s, %10s, %10d", i+1, students[i].first_name, students[i].last_name,students[i].age );
        i++;
    }
    fclose(fptr);

}
