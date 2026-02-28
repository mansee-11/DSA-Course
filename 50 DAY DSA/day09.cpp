//Check if array is sorted and rotated

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter no. of element in array:-";
    cin >> n;

    int arr[n];
    cout << "enter element of array one by one:-";
    for (int i=0; i<n; i++)
    {
        cin >>arr[i];
    }

    int count=0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1]) count++;
    }

    if(count==0)
    {
        cout<<"array is sorted not rotated";
    }

    else if(count==1)
    {
        cout<<"array is sorted and rotated";
    }

    else
    {
        cout<<"array is nither sorted nor rotated";
    }
}