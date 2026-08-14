//isomorphic string

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    string s="call",t="sell";
    unordered_map<char,char> st;
    unordered_map<char,char> ts;

    for(int i=0;i<s.length();i++)
    {
        if(st.count(s[i]))
        {
            if(st[s[i]]!=t[i])
            {
               cout<<"false";
               return 0;
            }
        }

        if(ts.count(t[i]))
        {
            if(ts[t[i]]!=s[i])
            {
                cout<<"false";
                return 0;
            }
        }

        st[s[i]]=t[i];
        ts[t[i]]=s[i];
    }

    cout<<"true";
    return 0;
}