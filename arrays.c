#include <stdio.h>
void main()
{
    int numbers[11];
    int i;
    for (i=0;i<=10;i++)
    {
        printf("Numbers[%d]\n",i);
        scanf("%d",&numbers[i]);
    }
    int k;
    for (k=0;k<=10;k++)
    {
        printf("\n%d",numbers[k]);
    }
}
