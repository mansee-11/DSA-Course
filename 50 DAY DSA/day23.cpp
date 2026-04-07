//Remove duplicates from a string

#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    string str,result="";
    cout<<"enter a string:- ";
    cin>>str;

    unordered_set<int> set;

    for(int i=0;i<str.length();i++)
    {
        if(set.find(str[i])==set.end())
        {
            result+=str[i];
            set.insert(str[i]);
        }
    }
    cout<<"string after operation is "<<result;
    return 0;
}