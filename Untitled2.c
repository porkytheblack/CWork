#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    int counter=0;

    for (int i = 2; i<num; i++)
    {
        if(num%i==0)
            counter++;
    }
    if(counter!=0)
    {
        printf("NOT A PRIME NUMBER\n");
    }
    else
    {
        printf("PRIME NUMBER\n");
    }
    return;
}
