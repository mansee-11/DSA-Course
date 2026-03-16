//Find intersection of two sorted arrays

#include<iostream>
using namespace std;

int main()
{
    int n,m;

    cout<<"enter no of element in 1st array:- ";
    cin>>n;

    int a[n];
    cout << "enter element of array one by one:-\n";
    for (int i=0; i<n; i++)
    {
        cin >>a[i];
    }

    cout<<"enter no of element in 2nd array:- ";
    cin>>m;

    int b[n];
    cout << "enter element of array one by one:-\n";
    for (int i=0; i<m; i++)
    {
        cin >>b[i];
    }

    cout<<"Intersection is ";
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}