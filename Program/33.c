//An admission charge for The Little Rep Theatre varies according to the age of the person. Develop a solution to print the ticket charge given the age of the person.

// The charges are as follows:
// a. Over 55: $10.00
// b. 21–54: $15.00
// c. 13–20: $10.00
// d. 3–12: $5.00
// e. Under 3: Free

#include <stdio.h>

int main() 
{
    int age;
    double ticketCharge;
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    if (age >= 55) 
        {ticketCharge = 10.00;} 
    else if (age >= 21) 
        {ticketCharge = 15.00;} 
    else if (age >= 13) 
        {ticketCharge = 10.00;} 
    else if (age >= 3) 
        {ticketCharge = 5.00;}
    else 
        {ticketCharge = 0.00;}

    printf("Ticket charge: $%.2lf\n", ticketCharge);

    return 0;
}
