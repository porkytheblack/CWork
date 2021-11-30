#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * read;
FILE * write;

//stucts
struct customer_order_details {
    char first_name[20];
    char last_name[20];
    int dates[3];
};


//global variables
int loop_control = 1;
int runs = 0;

//prototypes
void control_game_loop(void);
void write_order_details_to_file(struct customer_order_details order, int n, float item_prices[], char  ordered_items[][20]);
void get_order_details(int order_items);
float discount(float n);

void main(){
    int order_items;
    do{
        runs++;
        printf("How many items are you ordering: \n");
        scanf("%d", &order_items);
        get_order_details(order_items);
        control_game_loop();
    }while(loop_control);

}

void control_game_loop(){
    char control_choice[10];
    if(runs ==1 ){
        printf("Create invoices for new customer orders? enter 'continue' to proceed and 'done' to exit \n");
        scanf("%s", control_choice);
        if(!strcmp("done", control_choice)){
            loop_control = 0;
        }
    }
    if(runs > 1){
        printf("Enter 'continue' to add a new customer and 'end' to stop\n");
        scanf("%s", control_choice);
        if(!strcmp("end", control_choice)){
            loop_control = 0;
        }
    }
}

void get_order_details(int order_items){
    struct customer_order_details order;
        printf("Enter Customer's First Name: \n");
        scanf("%s", order.first_name);
        printf("Enter Customer's Last Name: \n");
        scanf("%s", order.last_name);

            printf("What year was the order placed: \n");
            scanf("%d", &order.dates[0]);
            printf("What month was the order placed: \n");
            scanf("%d", &order.dates[1]);
            printf("What date was the order placed: \n");
            scanf("%d", &order.dates[2]);


        float item_prices[order_items];
        char ordered_items[order_items][20];
        for(int i = 0; i < order_items; i++ ){
            printf("Enter the name of item %d \n", i+1);
            scanf("%s", ordered_items[i]);
            printf("Enter the price of %s\n", ordered_items[i]);
            scanf("%f", &item_prices[i] );

        }

        write_order_details_to_file(order, order_items, item_prices,ordered_items );
}

void write_order_details_to_file(struct customer_order_details order, int n, float item_prices[], char  ordered_items[][20]){

    printf("Before openning file");
    write = fopen("CustomerInvoiceDetails.txt", "a");

    int total = 0;
    if( write != NULL){
            printf("Test success, pointer not null");
            fprintf(write, "--------------------------------------------- New Order ---------------------------------------\n");

            fprintf(write, "Customer Name: %20s %20s\n", order.first_name, order.last_name);

            fprintf(write, "Date: %d/%d/%d\n", order.dates[2], order.dates[1], order.dates[0] );

            fprintf(write, "\t\tItems Ordered\n");

            fprintf(write, " Item Name                               Item Price\n");

            for(int i = 0; i < n; i++){

                fprintf(write,"%d %s %.2f \n", i+1, ordered_items[i], item_prices[i]);

                total+=item_prices[i];

            }

            fprintf(write,"Total Price \t\t %.2f\n", discount(total));

            fclose(write);
    }else{
        printf("An error occured while trying  to open the file\n");
        fclose(write);
    }

}

float discount(float n){
    if(n > 5000){
        return (0.95 * n);
    }else{
        return n;
    }
}


