// A hotel has a pricing policy as follows:
// a.	2 people: $85
// b.	3 people: $90
// c.	4 people: $95
// d.	Additional people: $6 per person
// If the customer is staying on company business, there is a 20% discount. If the customer is over 60 years of age, 
// there is a 15% discount. A customer does not receive both discounts. Given the above data, print the cost of the room.

#include <stdio.h>

int main() 
{
    int numPeople, age;
    double basePrice, totalPrice;
    char business;
    printf("Enter the number of people: ");
    scanf("%d", &numPeople);
    if (numPeople == 2) 
        {basePrice = 85.00;} 
    else if (numPeople == 3) 
        {basePrice = 90.00;}
    else if (numPeople == 4) 
        {basePrice = 95.00;}
    else 
        {basePrice = 95.00 + (numPeople - 4) * 6.00;}
    printf("Is the customer staying on company business? (y/n): ");
    scanf(" %c", &business);
    printf("Enter the age of the customer: ");
    scanf("%d", &age);
    if (business == 'y') 
        {totalPrice = basePrice * 0.8;} // 20% discount for company business
    else if (age > 60)
        {totalPrice = basePrice * 0.85;}// 15% discount for customers over 60
    else 
        {totalPrice = basePrice;}
    printf("Total cost of the room: $%.2lf\n", totalPrice);
    return 0;
}
