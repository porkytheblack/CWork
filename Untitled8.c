#include <stdio.h>
void main()
{
  int i,x=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      x=x*i;

  printf("The Factorial of %d is: %d\n",num,x);
}
