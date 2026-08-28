//pow(x,n)

#include<iostream>
using namespace std;

int main()
{
    int x=3,n=5,b=5,ans=1;

    while(b>0)
    {
        if(b%2==1)
        {
            ans*=x;
        }
        x*=x;
        b/=2;
    }
    cout<<ans;
}