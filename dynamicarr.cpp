#include<stdio.h>
#include<conio.h>
#define MAX  7
int main()
{
    double temp[MAX],count,ave;
    int i;
    count=0;
    for(i=0;i<MAX;i++)
    {
      printf("Enter temprature in celcious %d of the day of week:-",i+1);
      scanf("%lf",&temp[i]);
      count+=temp[i];
    }
    ave=count/MAX;
    printf("The average is := in %.lf degree",ave);
    getch();

}