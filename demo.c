#include<stdio.h>
int main()
{

  float radius, base, height;
  int choice;
  printf("1.Area of circle\n");
  printf("2.Area of triangle\n");
  printf("3.Area of a rectangle\n");
   printf("select your choice\n");
   scanf("%d", &choice);
  switch(choice)
       {
      case 1:
          printf("You have chosen area of circle\n");
          printf("Enter the radius\n");
          scanf("%f", &radius);
          printf("Area of circle is %f\n", 3.14*radius*radius);
          break;
      case 2:
          printf("You have chosen area of triangle\n");
          printf("Enter the base\n");
          scanf("%f", &base);
          printf("Enter the height\n");
          scanf("%f", &height);
          printf("Area of triangle is %f\n", (base*height)/2);
          break;
      case 3:
         printf("You have chosen area of rectangle\n");
          printf("Enter the base\n");
          scanf("%f", &base);
          printf("Enter the height\n");
          scanf("%f", &height);
          printf("Area of rectangle is %f\n", base*height);
          break;
      default :
          printf("Invalid operation\n");
       }
  }













