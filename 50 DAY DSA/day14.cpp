//Subarray with given sum (Two pointer / Sliding window)

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

    int target;
    cout<<"enter the target sum:= ";
    cin>>target;

    for(int i=1;i<=n;i++)
    {
        int sum=arr[0];
        for(int j=1;j<i;j++)
        {
            sum+=arr[j];
        }
        if(sum==target) 
        {
            cout<<"subarray is (0-"<<i-1<<")";
            return 0;
        }
        for(int k=0,l=i;l<n;k++,l++)
        {
            sum+=arr[l];
            sum-=arr[k];
            if(sum==target)
            {
                cout<<"subarray is ("<<k+1<<"-"<<l<<")";
                return 0;
            }
        }
    }
}