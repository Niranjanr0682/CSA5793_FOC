// Summing up cubes of n numbers

#include <stdio.h>

int main() 
{
    int n;
    int sum = 0;
    printf("Enter n value : ");
    scanf("%d", &n);
    if (n > 0) 
        {for (int i = 1; i <= n; i++) 
            {sum += i * i * i;}
        printf("Sum of the cubes of the first %d numbers is %d\n", n, sum);}
    else 
        {printf("Please enter a positive integer.\n");}
    return 0;
}
