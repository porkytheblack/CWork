#include<stdio.h>
int main()
{
	 int number, i, sum=0;
	 printf("Enter number: ");
	 scanf("%d", &number);

	 for(i=0;i < number; i++)
	 {
	  sum = sum+i;
	  if(sum == number)
	  {
	   printf("%d is TRIANGULAR NUMBER.", number);
	   break;
	  }
	 }
	 if(number == i)
	 {
	  printf("%d is NOT TRIANGULAR NUMBER.", number);
	 }
	 return(0);

}
