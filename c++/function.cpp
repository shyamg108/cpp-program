#include<iostream>
using namespace std;   
void prime()
{
    int n;
    int count=1;
    int i;
    cout<<"Enter any number:-";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<n<<" is prime number";
    }
    else
    {
        cout<<n<<"this is not prime number";
    }
}
void fact()
{
    int n;
    int count=1;
    int i;
    cout<<"\nEnter any number:-";
    cin>>n;   
    for(i=1;i<=n;i++) 
    {
        count=count*i;
    }
    cout<<"factorial of the number "<<n<<"="<<count;

}
int main()
{
     prime();
     fact();
return 0;
}


