#include<stdio.h>
void main()
{
    int courses[7]={1,2,3,4,5,6,7};
    int marks[7];
    int i,j,k;
    char grade;
    for(i=0;i<=6;i++)
    {
      printf("Enter the marks for course %d\n",courses[i]);
      scanf("%d",&marks[i]);
    }
    for(j=0;j<=6;j++)
    {
         if(marks[j]<=100&&marks[j]>=70)
        {
            grade='A';
        }
        else if (marks[j]<70&&marks[j]>=60)
        {
            grade='B';
        }
        else if (marks[j]<60&&marks[j]>=50)
        {
            grade='C';
        }
        else if (marks[j]<50&&marks[j]>=30)
        {
            grade='D';
        }
        else
        {
            grade='E';
        }
        printf("\nCOURSE %d:MARKS is %d:GRADE %c",courses[j],marks[j],grade);
    }
}
