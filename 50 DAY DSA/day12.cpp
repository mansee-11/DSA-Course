//Count the number of occurrences of an element

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

    int e;
    cout<<"enter the element to find occurrence:= ";
    cin>>e;

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==e) count++;
    }

    if(count>0)
    {
        cout<<"occurrence is "<<count;
    }
    else
    {
        cout<<"element not found";
    }
}