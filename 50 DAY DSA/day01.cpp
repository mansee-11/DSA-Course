//to find max and min from a array

#include<iostream>
using namespace std;
int max(int a[],int l)
{
    int mx=a[0];
    for(int i=1;i<l;i++)
    {
        if(mx<a[i])
        {
            mx=a[i];
        }
    }
    return mx;
}
int min(int a[],int l)
{
    int mn=a[0];
    for(int i=1;i<l;i++)
    {
        if(mn>a[i])
        {
            mn=a[i];
        }
    }
    return mn;
}
int main()
{
    int arr[]={2,-4,11,5,-7,9,23,18,-15,20};
    int length=sizeof(arr)/sizeof(arr[0]);

    cout<<"Max element of array = "<<max(arr,length)<<endl;
    cout<<"Min element of array = "<<min(arr,length)<<endl;

    return 0;
}