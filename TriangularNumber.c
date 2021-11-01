#include <stdio.h>

void main(){
    int n, tri_sum;
    printf("Enter the number: \n");
    scanf("%d", &n);
    //if the number is included
    for(int i = 0; i <= n; i++){
        tri_sum += i;
    }

    printf("Result is: %d", tri_sum);

}
