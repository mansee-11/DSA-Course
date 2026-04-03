//Merge two sorted arrays without using extra space


#include<iostream>
#include <algorithm>
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

    int b[m];
    cout << "enter element of array one by one:-\n";
    for (int i=0; i<m; i++)
    {
        cin >>b[i];
    }

    for (int i = m - 1; i >= 0; i--) {
        if (a[n - 1] > b[0]) {
            int temp = a[n - 1];
            a[n - 1] = b[0];
            b[0] = temp;

            sort(a,a+n);
            sort(b,b+m);
        }
    }

    cout<<"merged sorted array are:- ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
}