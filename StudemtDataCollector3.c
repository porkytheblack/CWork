#include <stdio.h>
#include <string.h>
//a struct that describes the student object
struct student {
    int marks[7];
    char first_name[20];
    char last_name[20];
    char grades[7][10];
};
//grade function for commenting code
char * get_grade(int n){
    if(n < 100 && n > 0){
        if(n >= 80){
            return " A ";
        }else if( n < 80 && n > 70 ){
            return " B ";
        }else if(n < 70 && n >= 50){
            return " C ";
        }else if(n < 50 && n > 30){
            return " D ";
        }else if(n >= 10 && n < 30 ){
            return "Fail";
        }
    }else{
        return "Invalid marks entered";
    }
}
void main(){
    //variable for holding the number of students in a class
    int number_of_students;
    //a char array for holding all the subject names
    char subject_names[7][50] = {
        "Programming Lab",
        "Discreet Math",
        "Introduction to Programming",
        "Introduction to Computing Systems",
        "Physics for Computing",
        "Communication Skills",
        "Elements of Economics"
    };
    //requesting for the nuber of students in a class
    printf("Enter the number of students in your class: \n");
    scanf("%d", &number_of_students);

    //creating an array of student objects whose length is equal to the number of students in the class
    struct student students[number_of_students];


    //for loop for collecting the data
    for(int i = 0; i < number_of_students; i++){
        printf("Enter student %d's first name: \n", i+1);
        scanf("%s", students[i].first_name);
        printf("Enter student %d's last name: \n", i+1);
        scanf("%s", students[i].last_name);
        for(int j =0; j < 7; j++){
            printf("Enter Student %s %s's marks in %s\n", students[i].first_name, students[i].last_name, subject_names[j]);
            scanf("%d", &students[i].marks[j]);
            strcpy(students[i].grades[j], get_grade(students[i].marks[j]));
    }
    }
    printf("\t\t\t\t Mark Sheet\n");
    //for loop for printing out the students' marks and grades in different subjects
    for(int a = 0; a < number_of_students; a++){
        printf("\t\t\t %s %s's performance \n", students[a].first_name,students[a].last_name );
        printf("%40s \t%5s %20s\n\n","Subject", "Marks", "Grade");
        for(int b = 0; b< 7; b++){
            printf("%40s  %5d  %20s \n", subject_names[b], students[a].marks[b], students[a].grades[b]);
        }

    }


}
