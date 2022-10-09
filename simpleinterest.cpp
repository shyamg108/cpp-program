#include<stdio.h>
#include<conio.h>
int main()
{
    double p,r,t,si;
    printf("Enter priciple number:-\n");
    scanf("%lf",&p);
     printf("Enter rate number:-\n");
    scanf("%lf",&r);
     printf("Enter time of years:-\n");
    scanf("%lf",&t);
    si=(p*r*t)/100;
    printf("simple interest is:-%.2lf",si);
}
