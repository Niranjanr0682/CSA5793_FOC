//Generation of number series 1, 2, 3, 4,…..n

#include <stdio.h>
int main() 
{
    int n;
    printf("Enter n value : ");
    scanf("%d", &n);
    printf("Number series from 1 to %d: \n", n);
    for (int i = 1; i <= n; i++) 
        {printf("%d ", i);}
    return 0;
}
