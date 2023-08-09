// Summing up 2^2 + 4^2 + 6^2 + 8^2 + ….. n^2

#include <stdio.h>

int main() 
{
    int n, sum = 0;
    printf("Enter n value : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i+=2) 
        {sum += i * i;}
    printf("Sum of the series 1^2 + 2^2 + 3^2 + 4^2 + ... + %d^2 = %d\n", n, sum);
    return 0;
}
