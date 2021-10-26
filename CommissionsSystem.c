#include <stdio.h>
//constant to hold the retainer amount's value
#define retainer_amount 25000
//function that calculates the commission amount
float calculate_commission(int n){
    if(n <= 1000){
        return (0.01* n);
    }else if(n <= 5000 && n > 1000){
        return (0.03*n);
    }else if(n <= 10000 && n > 5000){
        return (0.05*n);
    }else if(n > 10000){
        return (0.01*n);
    }else return 0.0;
}

void main(){
    printf("%.2f", 4.556);
    //a struct defining the emloyee object
    struct employee{
        int sales;
        char firstname[50];
        char lastname[50];
        char payroll_number[20];
        float commission;
        float salary;
    };
    //get the number of employees in the company this is used for looping and assigning a size to the employees array
    int no_of_employees;
    printf("Enter the number of employees in your company: \n");
    scanf("%d", &no_of_employees);
    //create an employees array to hold all employee data
    struct employee employees[no_of_employees];
    //for loop to collect all employee data
    for(int a  =0; a < no_of_employees; a++){
        printf("\nEnter the first name of the employee %d: \n", a+1);
        scanf("%s", employees[a].firstname);
        printf("Enter the last name of the employee %d: \n", a+1);
        scanf("%s", employees[a].lastname);
        printf("Enter the sales amount of %s: \n", employees[a].firstname);
        scanf("%d", &employees[a].sales);
        printf("Enter the payroll number of %s: \n", employees[a].firstname);
        scanf("%s", employees[a].payroll_number);
        //implementing the calculate commission function to get the employees commission
        employees[a].commission = calculate_commission(employees[a].sales);
        //adding commision to the reatiner_amount inorder to get salary
        employees[a].salary = retainer_amount + employees[a].commission;
    }
    //Printing out the employee's payroll
    printf("\n\n \t\t\t Employee Payroll: ");
    for(int a  = 0 ; a  < no_of_employees; a++){
        printf("\n\n%d %s %s's salary summary: \n",a+1, employees[a].firstname, employees[a].lastname);
        printf("Payroll number: %s \n\n",employees[a].payroll_number );
        printf("Sales \t\t\t Commission \t\t Total Salary\n");
        printf("%d \t\t\t %f \t\t %f\n\n", employees[a].sales, employees[a].commission, employees[a].salary);
    }

}
