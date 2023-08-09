// Summing up any n numbers and finding average

#include <stdio.h>

int main() 
{
    int n;
    int sum = 0;
    float average;
    printf("Enter range : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
        {int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;}
    average = (float)sum / n;
    printf("Sum of the %d numbers is %d\n", n, sum);
    printf("Average of the %d numbers is %.2f\n", n, average);
    return 0;
}
