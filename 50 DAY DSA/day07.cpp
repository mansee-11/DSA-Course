//Cyclically rotate an array by one

#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int n,i;
    cout << "enter no. of element in array:-";
    cin >> n;
    cout << "enter element of array one by one:-";
    for (i=0; i<n; i++)
    {
        cin >>arr[i];
    }

    int temp=arr[n-1];
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    cout << "Cyclically rotate an array by one:-" << endl;
    for (i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}