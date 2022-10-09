#include<iostream>
#include<conio.h>
using namespace std;
 struct Student
    {
        char nm[60], fnm[50];   /* data member creation */
        int age;
    };
 int main()
 {
    // struct student a,b,c;  object creation in c
    Student a,b,c;   /* object creation in c++*/
    cout<<"Enter Student name :-";
    cin>>a.nm;  /*data member accessed outside of structure with object with .singn */
    
    cout<<"\nEnter Student age :-";
    cin>>a.age;
    cout<<endl<<"Enter Student  father name :-";
    cin>>a.fnm;
    // cout<<"Enter name:-"<<"\nEnter father name:-"<<"\nEnter age";
    // cin>>b.nm>>b.fnm>>b.age;
   
 }