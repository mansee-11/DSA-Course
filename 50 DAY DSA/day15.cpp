//Missing number in array [1 to n]

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

    int aresult=0,result=0;
    for(int i=0;i<n;i++)
    {
        aresult^=arr[i];
    }

    for(int i=1;i<=n+1;i++)
    {
        result^=i;
    }

    cout<<"missing number is "<<(result^aresult);
}