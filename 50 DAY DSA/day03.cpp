//to find kth max and min in an array

#include<iostream>
using namespace std;

int main()
{
    int arr[]={100,-300,600,-200,400,-800,500,-700,};
    int length=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the value of k = ";
    cin>>k;
    //first sort the array
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]>arr[j])
            {
                //swaping without using 3rd veriable
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
    
    cout<<"kth min element = "<<arr[k-1]<<endl;
    cout<<"kth max element = "<<arr[length-k]<<endl;
}