#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

struct student {
    int marks[7];
    char first_name[30];
    char last_name[30];
    char grades[8];
};

char grade_mark(int n);

void main(){
    char courses[7][50] = {
        "Programming Lab",
        "Intro to programming",
        "Discreet Math",
        "Intro to Computer Systems",
        "Physics for Computing",
        "Economics",
        "Communication Skills"
    };
    int number_of_students;
    printf("Enter the number of students in your class: \n");
    scanf("%d", &number_of_students);
    struct student student_data[number_of_students];

    for(int i = 0; i < number_of_students; i++){
        printf("Enter the first name of student %d: ", i+1);
        scanf("%s", student_data[i].first_name);
        printf("Enter the last name of student %d: ", i+1);
        scanf("%s", student_data[i].last_name);
        for(int j = 0; j < 7; j++){
            printf("Enter the marks of %s in %s: ", student_data[i].first_name, courses[j]);
            scanf("%d",&student_data[i].marks[j] );
            printf("\n");
        }
    }
    //Grading
    for(int i = 0; i < number_of_students; i++ ){
        for(int j =0; j < 7; j++){
            student_data[i].grades[j] = grade_mark(student_data[i].marks[j]);
        }
    }
    //Write to file
    fptr = fopen("graded_marks.txt", "w");
    for(int i = 0; i < number_of_students; i++){

        fprintf(fptr, "\t\t %30s %30s \n", student_data[i].first_name, student_data[i].last_name);
        fprintf(fptr, "%60s %20s GRADE \n", "COURSE NAME", "MARKS" );
        for(int j = 0; j < 7; j++){
            fprintf(fptr, "%60s %20d %c \n", courses[j], student_data[i].marks[j], student_data[i].grades[j]);
        }
        fprintf(fptr,"\n\n");
    }
    printf("File Updated Successfully");
    fclose(fptr);

}

char grade_mark(int n){
    if(n <= 100 && n >= 0){
        if(n >= 80){
            return 'A';
        }else if(n >= 70 && n < 80){
            return 'B';
        }else if(n >= 50 && n < 70){
            return 'C';
        }else if(n >=30 && n < 50){
            return 'D';
        }else if(n >= 0 && n < 30){
            return 'E';
        }
    }else{
      return '_';
    }
}

