#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1;
    int n=500;
    for(a=1;a<=500;a++)
    {
        if(a%2==0)
        printf("%d,",a);
        else
        printf("%d",a);

    }
    printf("\b ");
}