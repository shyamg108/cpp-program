#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main()
{
    
    int a=1;
    int t;
    double n;
    // clrscr();
    
    printf("Enter seriese 1,2,4,8....:-");
    scanf("%d",&t);
    printf("%d,",a);
    for(a=1;a<=t;a++)
    {
     n=pow(2,a);
     printf("%.lf,",n);
    }
    printf("\b.");

}

    