#include<stdio.h>

void main()
{

    int i=1, marks;
    char name [10];
    while(i<=7)
    {
printf("for course%d\n Enter name:",i);
scanf("%s",&name);
printf("Enter marks");
scanf("%d",&marks);
i++;
printf("course::%s\tmarks::d\n\n",name,marks);
}
}
