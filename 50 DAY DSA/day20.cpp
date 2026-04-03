//Maximum Product Subarray

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

    int max=arr[0], pro=arr[0];
    int start=0,end=0;
    int maxs=0,mend=0;
    for(int i=1;i<n;i++)
    {
        if(pro*arr[i]>arr[i])
        {
            pro*=arr[i];
            end=i;
        }
        else
        {
            start=i;
            end=i;
            pro=arr[i];
        }
        if(pro>max)
        {
            maxs=start;
            mend=end;
            max=pro;
        }
    }

    cout<<"max product is "<<max<<"\n";
    cout<<"max product subarray is ("<<maxs<<","<<mend<<")";
    return 0;
}