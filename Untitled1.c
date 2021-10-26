#include <stdio.h>
void main()
{
   char full_names[50];
   char reg_no[20];
   int marks;
   char grade;

   printf("Enter full names: \n");
   scanf("%s", full_names);
   getchar();
   printf("Enter Registration number: \n");
   scanf("%s", &reg_no);
   for (int i = 1; i<=7)
   {
    printf("Enter marks: \n");
    scanf("%d", &marks);
    if(marks >= 70 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks >= 60 && marks <= 69)
    {
        grade = 'B';
    }
    else if (marks >= 50 && marks <= 59)
    {
        grade = 'C';
    }
    else if (marks >= 40 && marks <= 49)
    {
       grade = 'D';
    }
    else if (marks >= 0 && marks<=39)
    {
        grade = 'E';
    }
    i++;
   }

    printf("STUDENT NAME: %s\n", full_names);
    printf("STUDENT REGNO: %s\n", reg_no);
    printf("COURSE CODE\tMARKS\tGRADE\n");
    printf("CSC111\t\t%d\t%c\n",marks,grade);
    printf("CSC112\t\t%d\t%c\n",marks,grade);
    printf("CSC113\t\t%d\t%c\n",marks,grade);
    printf("CSC115\t\t%d\t%c\n",marks,grade);
    printf("CSC126\t\t%d\t%c\n",marks,grade);
    printf("CCS001\t\t%d\t%c\n",marks,grade);
    printf("CCS009\t\t%d\t%c\n",marks,grade);
}
