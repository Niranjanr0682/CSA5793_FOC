// Finding given number is Armstrong or not

#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,temp;    
printf("enter an integer to check for armstrong number = ");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
    {r=n%10;    
    sum=sum+(r*r*r);    
    n=n/10;}    
if(temp==sum)    
    {printf("given number %d is an armstrong  number",temp);}   
else    
    {printf("given number %d is not armstrong number",temp);}   
return 0;  
}   