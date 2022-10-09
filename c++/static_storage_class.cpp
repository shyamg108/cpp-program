#include<iostream>
#include<conio.h>
using namespace std;
void show()
{
    int p=10;
    static int q=100;
    cout<<"p="<<p<<"\nq="<<q<<endl;
    p=p+5;
    q=q+20;
}
int main()
{
    show();
    show();
    show();
    // cout<<"q="<<q;   error 
}