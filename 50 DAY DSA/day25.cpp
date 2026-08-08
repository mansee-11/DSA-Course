//Print all permutations of a string

#include<iostream>
using namespace std;
 void per(string s,string r)
    {
        if(s=="")
        {
            cout<<r<<"\n";
            return;
        }
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            string result=s.substr(0,i)+s.substr(i+1);
            per(result,r+ch);
        }
    }
int main()
{
    string str;
    cout<<"enter a string:- ";
    cin>>str;

    per(str,"");
}