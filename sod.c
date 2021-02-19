#include <stdio.h>
void sod(int);
void main() 
{
printf("Enter the number:");
int i;
scanf("%d",&i);
sod(i);
}
void sod(int a)
{
    int s=0,r=0;
    while(a>0)
    {
    r=a%10;
    s=s+r;
    a=a/10;
    }
    printf("SUM IS %d",s);
}
