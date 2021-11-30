#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

struct bank_user {
    char first_name[50];
    char last_name[50];
    int balance;
    char account_number[20];
};

void add_users_to_file(struct bank_user * users, int n_users){
    fptr = fopen("bank_details.txt", "a");
    printf("%s \n", users[n_users-1].first_name);
    if(fptr != NULL){
            for(int i = 0; i < n_users; i++){
                fprintf(fptr, "\n\n%25s %25s\n", users[i].first_name, users[i].last_name);
                fprintf(fptr, "Account Number: %50s\n", users[i].account_number);
                fprintf(fptr, "Account Balance: %50d\n", users[i].balance);
                fprintf(fptr, "\n\n");
            }
            printf("Done working on file\n");
    }else{
        printf("Unable to open up file\n");
    }
    fclose(fptr);
}
void get_user_details(struct bank_user * users, int n_users){
    int ac_n, ac_b;
    printf("Enter the details for the users: \n");
    for(int i = 0; i < n_users; i++){
       printf("Enter user's First Name:\n");
        scanf("%s", users[i].first_name);
        printf("Enter user's Last Name:\n");
        scanf("%s", users[i].last_name);
        printf("Enter the user's bank account number:\n");
        scanf("%s", users[i].account_number);
        printf("Enter Account balance: \n");
        scanf("%d", &users[i].balance);
    }
}

void read_from_file(){
    fptr = fopen("bank_details.txt", "r");
    int s;
    fseek(fptr, 0, SEEK_END);
    s  = ftell(fptr);
    fclose(fptr);
    fptr = fopen("bank_details.txt", "r");
     printf("%d", s);
    char data[s];
    while(!feof(fptr)){
        fgets(data, s, fptr);
        printf("%s", data);
    }
    fclose(fptr);

}
void main(){
    int number_of_users;
    printf("Enter the number of users: \n");
    scanf("%d", &number_of_users);
    struct bank_user users[number_of_users];
    get_user_details(users, number_of_users);
    add_users_to_file(users, number_of_users);
    read_from_file();
}
