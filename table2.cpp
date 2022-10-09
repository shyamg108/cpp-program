#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number:-";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        int tot=+(n*i);
     cout<<n<<"     X"<<"    "<<i<<"    "<<"="<<tot<<endl;
    }
    return 0;
}