//Check for palindrome

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string:- ";
    cin>>str;

    bool ispalindrome =true;
    for(int i=0,j=str.length()-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            cout<<"string is not palindrome";
            ispalindrome=false;
            break;
        }
    }

    if(ispalindrome)
    {
        cout<<"string is palindrome";
    }
}