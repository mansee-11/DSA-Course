//Reverse a string

#include<iostream>
using namespace std;

int main()
{
    string str,rev;
    cout<<"enter a string:- ";
    cin>>str;

    for(int i=str.length()-1;i>=0;i--)
    {
        rev+=str[i];
    }

    cout<<"reversed string is "<<rev;
}