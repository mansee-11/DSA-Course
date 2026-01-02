//to reverse an array in place

#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);

    for(int i=0,j=length-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    cout<<"reversed arr is:-"<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}