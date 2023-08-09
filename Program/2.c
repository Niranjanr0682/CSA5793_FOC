// Generation of even number series 2, 4, 6, …..n

#include <stdio.h>
int main() 
{
    int n;
    printf("Enter n value : ");
    scanf("%d", &n);
    printf("Even number series from 2 to %d: ", n);
    for (int i = 2; i <= n; i += 2) 
        {printf("%d", i);}
    return 0;
}
