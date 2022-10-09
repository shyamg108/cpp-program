#include<stdio.h>
#include<conio.h>
#define max  10
void main()
double arr[max],tot,per;
int i;
clrscr()
{
    tot=0;
    for(i=0;i< max;i++)
    {
        printf("marks of subject %d out of 100:-",i+1);
        scanf("%lf",&arr[i]);
        tot+=arr[i];
    }
    per=tot/max;//per=tot*100/1000;
    printf("Total marks of all subject out of 1000:-%.2lf\n",tot);
    printf("percentage of marks:-%.2lf",per);

  getch();
}