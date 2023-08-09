#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n vaalue : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
        {if (i % 2 == 0) 
            {sum -= i;}
        else
            {sum += i;}}
    printf("Sum of the series 1 - 2 + 3 - 4 + 5 ... + %d = %d\n", n, sum);
    return 0;
}
