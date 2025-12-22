//STL - Standard Template Library

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    //decleration and initialization

    vector <int> a={1,2,3,4,5};
    cout<<a.size()<<" "<<a.capacity()<<endl;

    a.push_back(6);
    cout<<a.size()<< " "<<a.capacity()<<endl;

    a.emplace_back(7);
    cout<<a.size()<< " "<<a.capacity()<<endl;

    vector<string>b(10,"abc");
    cout<<b[5]<<endl;

    //access a vector

    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //or can use
    for(auto i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //using iterator
    vector<int>::iterator itr;

    itr=a.begin();
    cout<<*itr <<endl;
    itr =a.end()-1;
    cout<<*itr<<endl;

    for(itr=a.begin();itr!= a.end();itr++)
    {
        cout<< *itr << " ";
    }

    cout<<endl;

    //modifying vectors
    a[0]=11;

    //to modify all elements 
    for(auto &j: a)
    {
        j=j*2;
    }

    for(auto k: a)
    {
        cout<<k<<" ";
    }
    cout<<endl;

}