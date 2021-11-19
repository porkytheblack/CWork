#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

//game controls
int initial_loop = 1;
int internal_loop = 1;
int operation_loop = 1;


struct gamer {
    char first_name[20];
    char last_name[20];
    int points;
    int level;
    int * answers;
};

struct gamer_operations{
    char type[50];
    int numbers[2];
    int result;
    int response;
    int op_level;
    int op;
};

struct gamer new_player;
struct gamer_operations current_operation;

void main(){
        srand(time(0));
        printf("\t\t\t GAME INSTRUCTIONS");
        printf("This game has 3 levels: \n");
        printf("%s", "1. Level One(Low Level): involves number between 1 and 10\n");
        printf("%s", "2. Level Two(Middle Level): involves number between 11 and 50\n");
        printf("%s", "3. Level Three(High Level): involves number between 51 and 100\n");
        printf("To choose a level input the level number:\n");
    while(initial_loop){
        while(operation_loop){
            game_controls();
            operation();
        }
    }



}

void new_rand_generator(){
    if(current_operation.op_level == 1){
        current_operation.numbers[0] = (rand()%10, 1);
        current_operation.numbers[1] = (rand()%(10), 1);
    } else if(current_operation.op_level == 2){
        current_operation.numbers[0] = (rand()%50, 11);
        current_operation.numbers[1] = (rand()%(50), 11);
    }else if(current_operation.op_level == 3){
        current_operation.numbers[0] = (rand()%50, 51);
        current_operation.numbers[1] = (rand()%(50), 51);
    }
}


int operation(){
    if(current_operation.op == 1 ){
        add();
    }else if(current_operation.op == 2){
        subtract();
    }else if(current_operation.op == 3){
        multiply();
    }else if(current_operation.op == 4){
        divide();
    }
    game_controls();
}

void add(){
    new_rand_generator();
    int result = 0;
    int ans;


    for(int i = 0; i < 2; i++){
        result += current_operation.numbers[i];
        printf("%d", current_operation.numbers[i]);
        if(i == 0){
            printf(" + ");
        }
        if(i == 1){
            printf(" = ");
        }
    }
    ans = get_answer();
    printf("%d\n", result);
    if(result == ans){
        new_player.points++;
        printf("ANSWER: %10d\n YOUR ANSWER: %10d\n You are correct.\n", result, ans);
    }else{
        printf("ANSWER: %10d\n YOUR ANSWER: %10d\n You are wrong.\n", result, ans);
    }

}

void multiply(){
    new_rand_generator();
    int result = 1;
    int ans;
    for(int i = 0; i < 2; i++){
        result *= current_operation.numbers[i];
        printf("%d", current_operation.numbers[i]);
        if(i == 0){
            printf(" x ");
        }
        if(i == 1){
            printf(" = ");
        }
    }
    ans = get_answer();
    if(result == ans){
        new_player.points++;
        printf("ANSWER: %10d\n YOUR ANSWER: %10d\n You are correct.\n", result, ans);
    }else{
        printf("ANSWER: %10d\n YOUR ANSWER: %10d\n You are wrong.\n", result, ans);
    }

}
void subtract(){
    new_rand_generator();
    int result = 0;
    int ans;
    result = current_operation.numbers[0] - current_operation.numbers[1];
    printf("%d - %d = %d",current_operation.numbers[0], current_operation.numbers[1], result );
    ans = get_answer();
    if(result == ans){
        new_player.points++;
        printf("ANSWER: %10d\n YOUR ANSWER: %10d\n You are correct.\n", result, ans);
    }else{
        printf("ANSWER: %10d\n YOUR ANSWER: %10d\n You are wrong.\n", result, ans);
    }
}
void divide(){
    new_rand_generator();
    int result = 0;
    int ans;
    result = current_operation.numbers[0]/current_operation.numbers[1];
    printf("%d / %d = %d",current_operation.numbers[0], current_operation.numbers[1], result );
    ans = get_answer();
    if(result == ans){
        new_player.points++;
        printf("ANSWER: %10d\n YOUR ANSWER: %10d\n You are correct.\n", result, ans);
    }else{
        printf("ANSWER: %10d\n YOUR ANSWER: %10d\n You are wrong.\n", result, ans);
    }
}

void choose_new_op(){
    printf("\n \t From the menu choose an operation you would like to practice:\n\n ");
    printf("1. %s \n", "Addition");
    printf("2. %s \n", "Subtraction");
    printf("3. %s \n", "Multiplication");
    scanf("%d", &current_operation.op);
    game_controls();
}


int get_answer(){
    int n;
    printf("What is your answer? \n");
    scanf("%d", &n);
    return n;
}
int choose_oplevel(){
    int n;
    printf("What level do you want to play at: \n");
    scanf("%d", &n);
    return n;
}
void game_controls(){
    char n[5];
    printf("To exit the game input 'end'  to continue enter 'continue',\nenter 'operation' to use another operation enter 'level' to use a different level \n");
    scanf("%s", &n);
    struct gamer_operations new_ops;
    if(!strcmp(n, "end")){
        printf("Game ended by player\n");
        exit(0);
    }else if(!strcmp(n, "continue")){
        operation();
    }else if(!strcmp(n, "operation")){
        choose_new_op();
    }else if(!strcmp(n, "level")){
        current_operation.op_level = choose_oplevel();
        operation_loop = 0;
        internal_loop = 1;
    }else{
        printf("Invalid choice provided\n");
        game_controls();
        operation_loop= 0;
        initial_loop = 0;
        internal_loop = 0;
    }


}


