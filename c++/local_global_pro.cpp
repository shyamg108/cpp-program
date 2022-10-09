#include<iostream>
#include<conio.h>
using namespace std;
int x=100,y;
void show()
{
    int p=100;
    p=p+10;
    x=x+10;
}
int main()
{
    int x=500;
    // int y;
    show();
    show();
    show();
    cout<< "\nx="<<x<<"\ny="<<y;
    x=x+25;
    y=y+30;
    cout<< "\nx="<<x<<"\ny="<<y;
    cout<< "\nx="<<::x<<"\ny="<<::y;
    getch();

}
