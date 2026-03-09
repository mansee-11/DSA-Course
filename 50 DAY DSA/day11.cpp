//Rearrange array in alternating positive & negative items

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cout<<"enter no of element in array:- ";
    cin>>n;

    int arr[n];
    cout << "enter element of array one by one:-\n";
    for (int i=0; i<n; i++)
    {
        cin >>arr[i];
    }

    vector <int> a,b;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0) b.push_back(arr[i]);
        else a.push_back(arr[i]);
    }

    if(a.size()>b.size())
    {
        for(int i=0;i<n;i++)
        {
            if(i%2!=0 && !b.empty())
            {
                arr[i]=b[0];
                b.erase(b.begin());
            }
            else
            {
                arr[i]=a[0];
                a.erase(a.begin());
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(i%2!=0 && !a.empty())
            {
                arr[i]=a[0];
                a.erase(a.begin());
            }
            else
            {
                arr[i]=b[0];
                b.erase(b.begin());
            }
        }
    }

    cout<<"array after rearranging :-  ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}