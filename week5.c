#include<stdio.h>
void main()
{
    int no_units, marks;
    int i;
    printf("Enter the number of units\n");
    scanf("%d", &no_units);
    for(i=1; i<=no_units; i--)
    {
        printf("Enter unit %d ", i);
        scanf("%d", &marks);
    }
}
