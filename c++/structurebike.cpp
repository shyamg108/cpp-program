#include<iostream>
#include<conio.h>
using namespace std;
 struct structurebike
{
    char bnm[60],cnm[50],clnm[40]; /*data member creation*/
    float price;

};
int main()
{
    structurebike b1,b2;
    /* object creation */
    cout<<"Enter  1 st bike name:- ";
    cin>>b1.bnm;
    cout<<"Enter  1 st bike company name:- ";
    cin>>b1.cnm;
    cout<<"Enter  1 st bike color:- ";
    cin>>b1.clnm;
    cout<<"Enter  1 st bike price:- ";
    cin>>b1.price;
    cout<<"Enter  2nd bike name:- ";
    cin>>b2.bnm;
    cout<<"Enter  2nd bike company name:- ";
    cin>>b2.cnm;
    cout<<"Enter  2nd bike color:- ";
    cin>>b2.clnm;
    cout<<"Enter  2nd bike price:- ";
    cin>>b2.price;
}
