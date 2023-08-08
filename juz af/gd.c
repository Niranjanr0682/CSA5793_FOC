#include<stdio.h>
int main()
{
    int a,b,c,d,e,f ;
    printf("Please enter A marks to calculate grades :");
    scanf("%d", &e);
    printf("Please enter B marks to calculate grades :");
    scanf("%d", &b);
    printf("Please enter C marks to calculate grades :");
    scanf("%d", &c);
    printf("Please enter D marks to calculate grades :");
    scanf("%d", &d);
    a = e+b+c+d;
    if (a>400)
    {printf ("\nsootha aruthu soopu vatchiduvan \n \tolunga mark kudu");}
    else
    {if (a < 200)
        {printf("\n__fail da pundamagane__\n");}
    else if(a>=201 && a<350)
        {printf("\npadichi munnerura valiya paar da punda\n");}
    else
    {printf("sabash da magane");}}}