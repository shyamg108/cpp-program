#include<iostream>
#include<conio.h>
using namespace std;
class college
{
    // public:
    char cnm[50],pnm[40],phn[15];
    int yr;
    public:
    void getdata()
    {
        cout<<"\nestiblished year\nEnter college name\nprinciple name \ncollege phone number\n";
        cin>>yr>>cnm>>pnm>>phn;
    }
    void showdata()
    {
        cout<<"\ncollege name:-"<<cnm<<"\nPrinciple name:-"<<pnm<<"\ncollege phone:-"<<phn<<"\nEstiblished year:-"<<yr;

    }
};
int main()
{
    college a,b,c;
    a.getdata();
    b.getdata();
    c.getdata();
    a.showdata();
    b.showdata();
    c.showdata();
    // cout<<"Enter college name:-";
    // cin>>a.cnm;
    // cout<<"Enter principle name:-";
    // cin>>a.pnm;
    // cout<<"Enter phone name:-";
    // cin>>a.phn;
    // cout<<"Enter estiblished name:-";
    // cin>>a.yr;


}