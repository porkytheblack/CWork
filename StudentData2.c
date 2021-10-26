#include <stdio.h>

int get_total_marks(int arr[]){
    int total = 0;
    for(int i = 0; i < 7; i ++){
        total += arr[i];
    }
    return total;
}
char* get_grade(int n){
    return (n <= 100 && n >= 0) ?((n >= 70) ? " A " : (n < 70 && n >= 60) ? " B " : (n < 60 && n >= 50) ? " C " : (n < 50 && n>= 40) ? " D " : " F " ): "Invalid Marks Entered";
}
char* get_grade_with_if(int n){
    if(n >= 0 && n <= 100){
        if(n >= 70 && n <= 100){
            return " A ";
        }else if(n >= 60 && n < 70){
            return " B ";
        }else if(n >= 50 && n < 60){
            return " C ";
        }else if(n >= 40 && n < 50){
            return " D ";
        }else if(n >= 0 && n < 40){
            return " F ";
        }
    }else{
        return "Invalid marks";
    }
}

void main(){
    int number_of_students;
    char subjects[7][20] = {
        "CSC 111",
        "CSC 112",
        "CSC 113",
        "CSC 115",
        "CCS 001",
        "CSC 126",
        "CCS 009"
    };
    printf("Enter the number of students in your class: \n");
    scanf("%d", &number_of_students);

    char student_details[number_of_students][3][50];
    int student_marks[number_of_students][7];

    for(int a = 0; a < number_of_students; a++){
        char *reg = student_details[a][0];
        printf("Enter the registration details of student %d: \n", a+1);
        scanf("%s", reg);
        printf("Enter the name of student %d:\n ", a+1);
        scanf("%s", student_details[a][1]);
        printf("Enter the second name of student %d:\n ", a+1);
        scanf("%s", student_details[a][2]);
        for(int b = 0; b < 7; b++){
            printf("Enter the marks of %s in %s: \n", student_details[a][1], subjects[b]);
            scanf("%d", &student_marks[a][b]);
        }
    }
    printf("\t\t Class Mark Sheet \n\n");
    printf("Number of students in class: \t\t %d \n\n", number_of_students);

    for(int a =0; a < number_of_students; a++){
        printf("\t\t Student %d \n", a+1);
        printf("Student Name: %s %s\n", student_details[a][1],student_details[a][2] );
        printf("Student ID Number: %s \n", student_details[a][0]);
        printf("Course Code \t\t Marks \t\t Grade \n");
        for(int b = 0; b < 7; b++){
            printf("%s \t\t  %d \t\t  %s \n", subjects[b], student_marks[a][b], get_grade_with_if(student_marks[a][b]));
        }
    }

}
