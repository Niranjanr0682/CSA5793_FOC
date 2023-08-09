// Product series (Factorial of a given number)

#include<stdio.h>
int main()
{
    int i,fact =  1,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (i = 1;i<= n ; i++)
        {fact = fact *i;}
    printf("factorial of given number %d is : %d",n,fact);
    return 0;
}