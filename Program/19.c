// Reversing the digits of an integer number

#include <stdio.h>

int main() 
{
    int num, reversed = 0, digit;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    while (num > 0) 
        {digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;}
    printf("The reversed number is: %d\n", reversed);
    return 0;
}
