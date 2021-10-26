#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int char_pos_in_str(char str[], char c){
    char* ptr;
    int index;
    ptr = strchr(str, c);
    if(ptr == NULL){
        return -1;
    }
    index = ptr - str;
    return index;
}

int a_int_size(int arr[]){
	int s  = sizeof(arr)/sizeof(int);
	return s;
}
int a_char_size(char arr[]){
	int s  = sizeof(arr)/sizeof(char);
	return s;
}
int number_of_plus(char arr[]){
	int a;
	for(int n  = 0; n < a_char_size(arr); n++){
		if( n == '+'){
			a += 1;
		}
	}
	return a;
}
int number_of_minus(char arr[]){
	int a;
	for(int n  = 0; n < a_char_size(arr); n++){
		if( n == '-'){
			a += 1;
		}
	}
	return a;
}
int number_of_div(char arr[]){
	int a;
	for(int n  = 0; n < a_char_size(arr); n++){
		if( n == '/'){
			a += 1;
		}
	}
	return a;
}
int number_of_mult(char arr[]){
	int a;
	for(int n  = 0; n < a_char_size(arr); n++){
		if( n == 'x'){
			a += 1;
		}
	}
	return a;
}
int starting_pos(char signs[], char operation[]){
	int b = strcmp(operation, "plus") == 0 ? 1 : 0;
	if(b){
		int p = a_char_size(signs) - number_of_plus(signs);
	}

}

void execute_expression(int numbers[], char signs[]){
	  char temp_sign;
		int temp_number;
    int ans = 0;
    int prev[2];
    int plus = char_pos_in_str(signs, '+');
    int minus = char_pos_in_str(signs, '-');
    int mult = char_pos_in_str(signs, 'x');
    int div = char_pos_in_str(signs, '/');
    if(div != -1){
			printf("Expression divide");
        ans = numbers[div] / numbers[div+1];
        prev[0] = div;
        prev[1] = div+1;
    }
		//loop thru numbers [1,2,3,4,5] sorting them according to the order of operations
		for( int i = 0; i < a_int_size(numbers); i++ ){
			int end_of_pl;
			int end_of_div;
			int end_of_mul;
			int end_of_sub;
			char order[] = "/x+-";
			printf(" list of operations %s", order);
	  //loop thru the order using bubble method to sort
			temp_sign = signs[i+1];
			for(int a  = 0; a < a_char_size(signs); a++){
				if(signs[a] == order[0]){
				 	temp_sign = signs[0];
					signs[0] = signs[a];
					signs[a] = temp_sign;
				}
				if(signs[a] == order[1]){
				 	temp_sign = signs[0];
					signs[0] = signs[a];
					signs[a] = temp_sign;
				}
			}
		}
    if(mult != -1){
			printf( "Expression multipyly" );
        if(prev[1] != 0 && (prev[0] == mult || prev[1] == mult) ){
            ans *= numbers[mult];
        }else{
            ans = numbers[mult] * numbers[mult+1];
            prev[0] = mult;
            prev[1] = mult +1;
        }
    }
    if(plus != -1){
			printf("Expression add");
        if(prev[1] != 0 && (prev[0] == plus || prev[1] == plus) ){
            ans += numbers[plus];
        }else{
            ans = numbers[plus] + numbers[plus+1];
            prev[0] = plus;
            prev[1] = plus +1;
        }
    }
    if(minus != -1){
			printf("Expression subtract");
        if(prev[1] != 0 && (prev[0] == minus || prev[1] == minus) ){
            ans -= numbers[minus];
        }else{
            ans = numbers[minus] - numbers[minus+1];
            prev[0] = minus;
            prev[1] = minus +1;
        }
    }
    printf(" \n The answer to the expression is: %d ", ans);
}

void ask_question(){
    //initialize all variables
    int no_of_digits;
    char minus = '-' ;
    char plus = '+';
    char multiply = 'x';
    char divide = '/';
    char command[3];
    //get the number of digits in the expression
    printf("How many digits are in the expression? \n");
    scanf("%d", &no_of_digits);
    //create the number and sign arrays whose length is equal to the number of digit in the equation
    int number_input[no_of_digits];
    //no of digits minus one
    char signs[no_of_digits - 1];
    //loop the number of times digits are required in the expresion
    for(int i = 0; i < no_of_digits; i++){
            int en = 0; //holder of the inserted digit
            char sn; //holder of inserted sign
            //enter continue so that the program continues running
            //enter end t break the cycle and exit the program
                printf(" \nEnter the numbers that are part of the equation: \n");
                scanf(" %d", &en);
                //get the entered number and place it in the numbers array
                number_input[i] = en;
                if(i != i-1){
                    printf("Enter the sign for the expression: \n");
                    scanf(" %c", &sn);
                    signs[i] = sn; //get the entered sign
                }
    }
    //print the expression entered
    for(int i = 0; i < no_of_digits; i++){
        printf(" %d ", number_input[i]);
        if(i != no_of_digits-1){
            printf(" %c ", signs[i]);
        }
    }
    printf("\n\n\n");
    execute_expression(number_input, signs);
}

int main(){
    ask_question();
		return 0;
}
