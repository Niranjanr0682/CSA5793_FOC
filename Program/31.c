// Calculate the water bill given the cubic feet of water used for Eureka Water Company, which charges the homeowner one of the following:

// a.	A flat rate of $15.00 for usage up to and including 1000 cubic feet.
// b.	$0.0175 per cubic foot for usage over 1000 cubic feet and up to and including 2000 cubic feet.
// c.	$0.02 per cubic foot for usage over 2000 cubic feet and up to and including 3000 cubic feet.
// d.	A flat rate of $70.00 for usage over 3000 cubic feet.

#include <stdio.h>

int main() 
{
    double cubicFeet;
    double totalBill;

    printf("Enter the cubic feet of water used: ");
    scanf("%lf", &cubicFeet);

    if (cubicFeet <= 1000) 
        {totalBill = 15.00;} 
    else if (cubicFeet <= 2000) 
        {totalBill = 15.00 + 0.0175 * (cubicFeet - 1000);} 
    else if (cubicFeet <= 3000) 
        {totalBill = 15.00 + 0.0175 * 1000 + 0.02 * (cubicFeet - 2000);} 
    else 
        {totalBill = 70.00;}
    printf("Water bill: $%.2lf\n", totalBill);
    return 0;
}