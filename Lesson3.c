#include <stdio.h>
#include <string.h>

int main(){
    int a, b, ans;
    char operation[20];
    printf("Enter variable a: \n");
    scanf("%d", &a);
    printf("Enter variable b: \n");
    scanf("%d", &b);
    printf("Enter the operation you would like to execute: \n");
    scanf("%s", operation);
    if(!strcmp(operation, "add")){
        ans = a+b;
    }
    if(!strcmp(operation, "subtract")){
        ans = a-b;
    }
    if(!strcmp(operation, "multiply")){
        ans = a*b;
    }
    if(!strcmp(operation, "divide")){
        ans = a/b;
    }
    if(!strcmp(operation, "modulus")){
        ans = a%b;
    }
    //char chsn[5] = !strcmp(operation, "add") ? " + ":!strcmp(operation, "subtract") ? " - ": !strcmp(operation, "multiply") ? " x ": !strcmp(operation, "divide") ? " / " : !strcmp(operation, "modulus") ? " % " : !strcmp(operation, "rise") ? " ^ " : "  " ;
    printf("%d %s %d = %d", a, (!strcmp(operation, "add") ? " + ":!strcmp(operation, "subtract") ? " - ": !strcmp(operation, "multiply") ? " x ": !strcmp(operation, "divide") ? " / " : !strcmp(operation, "modulus") ? " % " : !strcmp(operation, "rise") ? " ^ " : "  " ), b, ans );
}
