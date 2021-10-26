#include <stdio.h>

void main() {
  char first_name[20], surname[20];
	for(int i =0; i , 2; i++){
		printf("\nEnter the first name of Student %d: \n", i+1);
		scanf("%s", first_name);
		printf("\nEnter surname \n");
		scanf("%s", surname);
		printf("\n First Name is: %s \nSurname is: %s", first_name, surname);
		printf("Initials %c.%c", first_name[0], surname[0]);
	}
}
