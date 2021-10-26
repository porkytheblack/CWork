#include <stdio.h>
#define pi 3.142

int area_of_rectangle(int w, int l){
    return w * l;
}
float area_triangle(int h, int b){
    return (float)(b/2)*h;
}
float circle(int r){
    return (float)2*(pi*(r*r));
}

void main(){
    int n, w, l, r, h, b;
    printf("Area of: \n1. Triangle \n2. Rectangle \n3. Circle \n choose one of the above by typing in the number: \n ");
    scanf("%d", &n);

    switch(n){
    case 1:
        printf("Enter the base: \n");
        scanf("%d", &b);
        printf("Enter the height: \n");
        scanf("%d", &h);
        printf("Area %f", area_triangle(h, b));
        break;
    case 2:
        printf("Enter Length: \n");
        scanf("%d", &l);
        printf("Enter Width: \n");
        scanf("%d", &w);
        printf("Area %d", area_of_rectangle(w, l));
        break;
    case 3:
        printf("Enter the radius: \n");
        scanf("%d", &r);
        printf("Area %f", circle(r));
        break;
    default:
        printf("Invalid Option provided");
        break;

    }
}


