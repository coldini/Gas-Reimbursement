#include <stdio.h>
#include <stdlib.h>

/*
* Programmer Name: Colden Jeanmonod
* Class and Semester: CIS 1057 Section 004 Fall 2023
* Date: Wednesday, September 20, 2023
* Assignment: Lab 2
* Name: Mileage Reimbursment
* Description: Prompt for Input
* figure out how many miles were traveled and amount due
*/

#define  MONEY_PER_MILES 0.35

int main()
{
double mile_traveled1, mile_traveled2,mile_traveled_total,custom_money_per_mile,  money_owed_standard, money_owed_custom;

//Prints a banner telling the user what the program does.

puts("MILES REIMBURSMENT");
puts("This program will find out how many miles you travelled and how much money you owe");

//prompts for Inputs from the user
printf("Enter your starting miles ");
scanf("%lf",&mile_traveled1);

printf("Enter your final miles ");
scanf("%lf", &mile_traveled2);

printf("Enter the money you were reimbursed per mile in decimals.  ");
scanf("%lf", &custom_money_per_mile);
//this should do the calculations to find the difference of the two points as well as money owed

mile_traveled_total = (mile_traveled2 - mile_traveled1);
money_owed_standard = (mile_traveled_total)*  MONEY_PER_MILES;
money_owed_custom = (mile_traveled_total)*custom_money_per_mile;


//Output the results on the screen
printf("Your miles traveled in total is %0.3lf . \n",
mile_traveled_total);
printf("Your amount if you drove with the standard rate is %0.3lf . \n",
money_owed_standard);
printf("The mount you are supposed to be reimbursed with in your custom amount %0.3lf . \n",
money_owed_custom);
return EXIT_SUCCESS;
}
