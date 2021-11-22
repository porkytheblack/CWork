#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int * sort_in_descending(int vals[], int n);
int * sort_in_ascending(int vals[], int n);
float calc_average(int vals[], int n);
float calc_std_deviation(int vals[], int n);
void controls(int vals[], int n);
int control_loop =1;


int main(void) {

	while(1){
      int n;
        printf("Enter the number of items you want in your array: \n");
        scanf("%d", &n);
        int vals[n];
        for(int i = 0; i < n; i++){
            printf("Enter the value in position %d of your array: \n", i+1);
            scanf("%d", &vals[i]);
        }
        control_loop = 1;
        while(control_loop){
            controls(vals, n);
        }

	}

  return 0;
}

int * sort_in_descending(int vals[], int n){
	int	x;
	for(int a = 0; a < n; a++){
		for(int b =0; b < n; b++){
			if(vals[a] > vals[b]){
                 x = vals[a];
                 vals[a] = vals[b];
                 vals[b] = x;
			}
		}
	}
	return vals;
}
int * sort_in_ascending(int vals[], int n){
	int	x;
	for(int a = 0; a < n; a++){
		for(int b =0; b < n; b++){
			if(vals[a] < vals[b]){
                 x = vals[a];
                 vals[a] = vals[b];
                 vals[b] = x;
			}
		}
	}
	return vals;
}

float calc_average(int vals[], int n){
    float sum;
    for(int a = 0; a < n; a++){
        sum += vals[a];
    }
    return sum/n;
}

float calc_std_deviation(int vals[], int n){
    float avg = calc_average(vals, n);
    float sum;
    for(int i = 0; i < n; i++){
        float sub = vals[i]-avg;
        sum += pow(sub, 2);
    }
    return sqrt(sum/n);
}

void print_in_descending(int vals[], int n){
    printf("\n\t\t Sorted in descending order\n");
	int * desc_order = sort_in_descending(vals, n);
	for(int i = 0; i < n; i++){
        printf("%d\n",desc_order[i] );
	}
}
void print_in_ascending(int vals[], int n){
    printf("\n\n\t\t Sorted in ascending order\n");
	int * asc_order = sort_in_ascending(vals, n);
	for(int i = 0; i < n; i++){
        printf("%d\n", asc_order[i]);
	}
}
void print_greatest(int * vals){
    printf("The greatest number is: %d\n", vals[0]);
}
void print_smallest(int * vals){
    printf("The smallest number is: %d\n", vals[0]);
}
void print_average(int vals[], int n){
    printf("The average is: %.2f\n", calc_average(vals, n));
}
void print_std_deviation(int vals[], int n){
    printf("The standard deviation is %.2f\n", calc_std_deviation(vals, n));
}


void controls(int vals[], int n){
    int b;
    printf("Enter 1 to view the array elements in descending order\n");
    printf("Enter 2 to view the array elements in ascending order\n");
    printf("Enter 3 to view the greatest number in the array: \n");
    printf("Enter 4 to view the smallest element in the array: \n");
    printf("Enter 5 to view the average: \n");
    printf("Enter 6 to view the standard deviation: \n");
    printf("Enter 7 to end the program: \n");
    printf("Enter 8 to enter new values into the array: \n");
    scanf("%d", &b);
    switch(b){
        case 1:
            print_in_descending(vals, n);
            break;
        case 2:
            print_in_ascending(vals, n);
            break;
        case 3:
            print_greatest(sort_in_descending(vals, n));
            break;
        case 4:
            print_smallest(sort_in_ascending(vals, n));
            break;
        case 5:
            print_average(vals, n);
            break;
        case 6:
            print_std_deviation(vals, n);
            break;
        case 7:
            exit(0);
        case 8:
            control_loop = 0;
            break;
        default:
            printf("Invalid choice provided");
            break;
    }

}
