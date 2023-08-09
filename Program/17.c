// Printing digits of an integer number

#include <stdio.h>

int main()
{
    int num, digit;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    printf("The digits of the number are: \n");
    while (num > 0) 
        {digit = num % 10;
        printf("%d \n", digit);
        num /= 10;}
    printf("\n");
    return 0;
}

