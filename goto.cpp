#include<iostream>
using namespace std;
int main()
{
eligible:
cout<<"you are not eligible to vote\n";
cout<< " Because your age is less then 18 year\n";
int age;
cout<<"Enter any age:";
cin>>age;
if(age<18)
{
    goto eligible;
}
    
    else
    {
    cout<<"you are not eligible to vote";
    }


}