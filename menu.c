#include<stdio.h>
#include <stdlib.h>
void main()
{
int choice;
int num;
printf("menu");
printf("1.choose number\n");
printf("2.determine if number is even or odd\n");
printf("3.determine if number is positive or negative\n");
printf("4.determine how many digits are in a number\n");
printf("5.exit\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
    get input(num);
    printf ("please choose a number you like");
    displaymenu;
    break;

case2:
    isEven;
    break;
case 3:
    IsPos;
    break;

case4:
    Numdigit;
    break;
case 5:
    Exit;
    break;
default
    printf("enter a valid choice");
    }
}
