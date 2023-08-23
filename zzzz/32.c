#include <stdio.h>

int main() 
{
    int orino,sod,cd,temp,nno;
    printf("Enter a four-digit number: ");
    scanf("%d", &orino);
    sod = 0;
    temp = orino;
    while (temp > 0) 
        {sod += temp % 10;
        temp /= 10;}
    if (sod % 2 == 0) 
        {cd = 0;}
    else 
        {cd = 1;}
    nno = orino * 10 + cd;
    printf("\nOriginal Number: %d\n", orino);
    printf("New Number: %d\n", nno);

    return 0;
}
