#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[]={10,20,45,75,34};
    int a=0;
    int sum = 0;
    for(a=1;a<=5;a++)
    {
          printf("%d Number is:- %d\n",a,arr[a]);
    }
    printf("List of Number:-\n");
    for(a=1;a<=5;a++)
    {
          printf("%d \t",arr[a]);
    }
     printf("sum  of Number:-\n");
      for(a=1;a<=5;a++)
    {
          printf("%d +",arr[a]);
          sum+=arr[a];
    }
    printf(" \b %d ",sum);

}