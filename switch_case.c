#include <stdio.h>

void main(){
    int n;
    printf("Enter the day: \n");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("The day is Monday\n");
            break;
        case 2:
            printf("The day is Tuesday\n");
            break;
        case 3:
            printf("The day is Wednesday\n");
            break;
        case 4:
            printf("The day is Thursday\n");
            break;
        case 5:
            printf("The day is Friday\n");
            break;
        case 6:
            printf("The day is Saturday\n");
            break;
        case 7:
            printf("The day is Sunday\n");
            break;
        default:
            printf("Invalid day entered \n");
            break;
    }
}

