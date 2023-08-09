// Summing up 1^1+2^2+3^3+4^4+ …. n^n

#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
        {sum += pow(i, i);}
    printf("Sum of the series is: %.2lf\n", sum);
    return 0;
}
