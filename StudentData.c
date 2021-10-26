#include <stdio.h>

int get_total_marks(int arr[]){
    int total = 0;
    for(int i = 0; i < 7; i++){
        total += arr[i];
    }
    return total;
}

int get_average(int arr[]){
    int total= 0, average;
    for(int i = 0; i < 7; i++){
        total += arr[i];
    }
    average = total/7;

}

void main(){
    int no_of_students;
    char subjects[7][20] = {
        "CSC 111",
        "CSC 112",
        "CSC 113",
        "CSC 115",
        "CCS 001",
        "CSC 126",
        "CCS 009"
    };
    printf("Enter the number of Students in your class: \n");
    scanf("%d", &no_of_students);
    int student_grades[no_of_students][4];
    char student_names[no_of_students][20];

    for(int a = 0; a < no_of_students; a++){
        printf("Enter the name of Student %d \n", a+1);
        scanf("%s", student_names[a]);
        for(int b = 0; b < 7; b++){
            printf("Enter the marks of %s in %s \n",student_names[a], subjects[b] );
            scanf("%d", &student_grades[a][b] );
        }
    }
    printf("\n\n Students performance sheet \n\n");
    for(int a = 0; a < no_of_students; a++){
        printf("\n\n\t\tPerformance of %s \n\n", student_names[a]);
        printf("Subject   \t\t Marks Grade \n\n");
        for(int b = 0; b < 7; b++){
            int n = student_grades[a][b];
            printf(" %s : \t\t %d \t %s \n", subjects[b], student_grades[a][b], n > 80 ? " A " : n < 80 && n > 60 ? " B " : n > 40 && n < 60 ? " C " : " D ");
        }
        printf("\nThe total marks are: \t %d \n", get_total_marks(student_grades[a]));
        printf("\nThe student's average is \t %d \n", get_average(student_grades[a]));

    }

}



