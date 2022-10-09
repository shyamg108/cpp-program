#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0;
    int a=1;
    printf("Sum of natural number 1 to n:-");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
     printf("%d+",a);
     count+=a;
    }
    printf("\b=%d",count);
}