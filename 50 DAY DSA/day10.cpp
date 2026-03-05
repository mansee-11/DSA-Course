//Leaders in an array

#include<iostream>
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

    cout<<"Leaders in a array are: "<<arr[n-1]<<" ";
    int leader=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>leader)
        {
            cout<<arr[i]<<" ";
            leader=arr[i];
        }
    }
}