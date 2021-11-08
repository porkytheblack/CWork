#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, track;
    printf("Enter a number: \n");
    scanf("%d", &n);
    track = n;
    while(track >= 1){
        printf(" %d \n %d * %d = %d \n", track, track, n, track*n);
        track--;
    }
}

