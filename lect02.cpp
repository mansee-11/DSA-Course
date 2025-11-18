#include<iostream>
using namespace std;
int main()
{
    /*
    int a,b;
    //ternary ststement
    cin>>a>>b;
    //a>b?cout<<"a greater":cout<<"b greater";    //1st way
    cout<<(a>b?"a greater":"b greater");        //2nd way
    
    //practice que to print prime no till given no
    int i,n,j;
    cout<<"enter a number:- ";
    cin>>n;
    cout<<"prime no till given no are:- ";
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=(i/2)+1;j++)         //or condition can be j*j<n
        {
            if(i%j==0) break;
        }
        if(j>(i/2)) cout<<"\n"<<i;
    }
    */
    
    //pattern practice que
    int i,j,num=1;

    cout<<"floyd's triangle";
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++) cout<<num++;
        cout<<"\n";
    }

    cout<<"pyramid pattern";
    for(i=0;i<5;i++)
    {
        for(j=5;i<j;j--) cout<<" ";
        for(j=1;j<i+1;j++) cout<<j;
        for(j=1;j<i;j++) cout<<i-j;
        cout<<"\n";
    }

    cout<<"Butterfly"<<"\n";
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++) cout<<"*";
        for(j=5;i<j;j--) cout<<" ";
        for(j=5;i<j;j--) cout<<" ";
        for(j=0;j<i;j++) cout<<"*";
        cout<<"\n";
    }
    for(i=0;i<5;i++)
    {
        for(j=5;i<j;j--) cout<<"*";
        for(j=0;j<i;j++) cout<<" ";
        for(j=0;j<i;j++) cout<<" ";
        for(j=5;i<j;j--) cout<<"*";
        cout<<"\n";
    } 
}    
