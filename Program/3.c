// Generation of ODD number series 1, 3, 5, …..n

#include <stdio.h>
int main() 
{
    int n;
    printf("Enter n value : ");
    scanf("%d", &n);
    printf("Odd number series from 1 to %d: ", n);
    for (int i = 1; i <= n; i += 2) 
        {printf("%d", i);}
    return 0;
}
