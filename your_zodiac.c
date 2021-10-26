#include <stdio.h>
#include <string.h>

//Based on the month and date entered this program will be able to print your Zodiac Symbol

void main(){
    //initializing an array of zodiacs
    char zodiacs[12][20] = {
        "Aries",
        "Taurus",
        "Gemini",
        "Cancer",
        "Leo",
        "Virgo",
        "Libra",
        "Scorpio",
        "Sagittarius",
        "Capricon",
        "Aquarius",
        "Pisces"
    };
    //initialize a 3d arrray of Months which are in sync with the Zodiacs
    char months[12][2][20] = {
        {
            "March", "April"
        },
        {
            "April", "May"
        },
        {
            "May", "June"
        },
        {
            "June", "July"
        },
        {
            "July", "August"
        },
        {
            "August", "September"
        },
        {
            "September", "October"
        },
        {
            "October", "November"
        },
        {
            "November", "December"
        },
        {
            "December", "January"
        },
        {
            "January", "February"
        },
        {
            "February", "March"
        }
    };
    //initialize a 2d array of dates whose value coresponds to the months
    int dates[12][2] = {
        {
            21, 20
        },
        {
            21, 20
        },
        {
            21,21
        },
        {
            22,22
        },
        {
            23,22
        },
        {
            23,22
        },
        {
            23,22
        },
        {
            23,22
        },
        {
            23,21
        },
        {
            22,20
        },
        {
            21,18
        },{
            19, 20
        }
    };
    //create a zodiac stucture that will hold the different values for a particular zodiac
    struct zodiac {
        int from_date;
        int to_date;
        char from_month[20];
        char to_month[20];
        char zod[20];
    };
    //create an array of type zodiac
    struct zodiac zods[12];
    //populate the array with values from the zodiacs, dates and months array
    for(int a  =0; a < 12; a++){
        zods[a].from_date = dates[a][0];
        zods[a].to_date = dates[a][1];
        strcpy(zods[a].from_month, months[a][0]);
        strcpy(zods[a].to_month, months[a][1]);
        strcpy(zods[a].zod, zodiacs[a]);
    }
    //create a user_details  stuct
    struct user_details{
        int date;
        char month[20];
    };
    //initialize a user_detail variable d
    struct user_details d;
    //Get data from the user
    printf("Enter your month of birth: \n");
    scanf("%s", d.month);
    printf("Enter your date of birth: \n");
    scanf("%d", &d.date);

    //use a loop to go through all zodiacs in the zod array
    for(int a  =0; a < 12; a++){
            //initialize 2 variables which will hold the result of a comparison
        int c1, c2;
        //assign the value returned after comparing the month provided by the user to the from month of the zodiac
        c1 = strcmp(d.month, zods[a].from_month );
        //assign the value returned after comparing the month provided by the user to the to month of the zodiac
        c2 = strcmp(d.month, zods[a].to_month);
        //use a switch block to compare the value in c1
        switch(c1) {
            case 0:
                //if the date provided by the user is greater or equal to the from_date of the zodiac
                switch(d.date >= zods[a].from_date){
                    //if it is greater that means the value returned will be 1, hence the user belongs to the provided zodiac
                    case 1:
                        printf("Your Zodiac Symbol is %s \n", zods[a].zod);
                        break;
                    case 0:
                        break;
                    }
                break;
        default:
            break;
        }
        switch(c2) {
            case 0:
                //if the date provided by the user is lesser or equal to the to_date of the zodiac
                switch(d.date <= zods[a].to_date){
                    //if it is lesser or equal that means the value returned will be 1, hence the user belongs to the provided zodiac
                    case 1:
                        printf("Your Zodiac Symbol is %s \n", zods[a].zod);
                        break;
                    case 0:
                        break;
                    }
                break;
        default:
            break;
        }
    }













    /*

    int n;
    printf("Enter the month you were born: \n");
    scanf("%d", &n);

    switch(n){
    case 1:
        printf("You were born on January.");
    case 2:
        printf("You were born on February");
    case 3:
        printf("You were born on March");
    case 4:
        printf("You were born on April");
    case 5:
        printf("You were born on May");
    case 6:
        printf("You were born on June");
    case 7:
        printf("You were born on July");
    case 8:
        printf("You were born on August");
    case 9:
        printf("You were born on September");
    case 10:
        printf("You were born on October");
    case 11:
        printf("You were born on November");
    case 12:
        printf("You were born on December");
    default:
        printf("Invalid month entered");
    }
    */

}
