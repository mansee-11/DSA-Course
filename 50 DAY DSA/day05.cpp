//to move all negative nums at the starting and all positive nums at the end of array

#include <iostream>
using namespace std;

int main()
{
    int arr[]={5,-20,9,-6,18,23,11,-15,-7};
    int length=sizeof(arr)/sizeof(arr[0]);

    int n=0;
    for(int i=0;i<length;i++)
    {
        if(arr[i]<0)
        {
            int temp=arr[i];
            for(int j=i;j>n;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[n]=temp;
            n++;
        }
    }

    cout<<"arranged array:-"<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}