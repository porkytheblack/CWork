#include <stdio.h>

void main(){
    //a 3d array to hold all the values
    int mat_all[2][3][3];
    //a 2d array to hold the results
    int mat_sum_ans[3][3] = {
        {
            0, 0, 0
        },
        {
            0, 0, 0
        },
        {
            0, 0, 0
        }
    };
    //for loop for collecting info
    for(int i =0; i < 2; i++){
            //display the current matrix
        printf(" Enter the values for matrix %d::: \n", i+1);
        for(int a = 0; a < 3; a++){
            //display the current row
            printf("Row: %d:: \n", a+1);
            for(int b =0; b < 3; b++){
                //enter the value for a particular position on a row in a matrix
                printf("Enter val %d::", b+1);
                scanf("%d", &mat_all[i][a][b]);
            }
        }
    }

    //this loop iteates over the values from the two different matrices and adds them
    for(int i =0; i < 2; i++){
        for(int a = 0; a < 3; a++){
            for(int b =0; b < 3; b++){
                mat_sum_ans[a][b] += mat_all[i][a][b];
            }
        }
    }
    printf("\t\t\tFinal Matrix: \n");
    //this loop prints out the results of the calculations
        for(int a = 0; a < 3; a++){
            for(int b =0; b < 3; b++){
                printf("%10d", mat_sum_ans[a][b]);
            }
            printf("\n");
        }
}

