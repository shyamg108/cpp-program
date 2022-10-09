#include<iostream>
#include<conio.h>
#define m 5
using namespace std;
class country
{
    char cnm[40],pnm[50],con_nm[60];
    double ar;
    unsigned long int pop;
    public:
    void input()
    {
        cout<<"Enter coutry name\nEnter prime minister name\nEnter continent name\nEnter area of country\nEnter population of country ";
        cin>>cnm>>pnm>>con_nm>>ar>>pop;
    }
    void output()
    {
     cout<<"Enter coutry name:-"<<cnm<<"\nEnter prime minister name:-"<<pnm<<"\nEnter continent name:-"<<con_nm<<"\nEnter area of country:-"<<ar<<"\nEnter population of country:- "<<pop;
    }
};
int main()
{
    country  a[m]; /* Array of class*/
    int i;
    for(i=0;i<=m;i++)
    {
        a[i].input();
    }
    for(i=0;i<=m;i++)
    {
        a[i].output();
    }
}
