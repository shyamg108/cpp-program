#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number:-";
    cin>>n;
    if(n<=16 && n>=5)
    {
      cout<<"you are not eligible for vote because you are kid" ;
    }
    else if(n>16 && n<18)
    {
        cout<<"you are not eligible for vote";
    }
    else if(n>=18 && n<60)
    {
        cout<<"you can vote";
    }
    else if(n>=60 && n<100)
    {
        cout<<"you can vote , but you are too old";
    }
    else{
        cout<<"you are not eligible for voting";
    }
    return 0;
}


