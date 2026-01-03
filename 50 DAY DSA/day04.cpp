//to sort array only with 0s,1s and 2s(The Dutch Flag Problem O(n))
   
#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,1,2,0,2,0,0,1,2,2,1};
    int length=sizeof(arr)/sizeof(arr[0]);

   int low=0,mid=0,high=length-1;

    while(mid<=high)
    {
       if(arr[mid]==0)
       {
          int temp=arr[mid];
          arr[mid]=arr[low];
          arr[low]=temp;
          low++;
          mid++;
       }
       else if(arr[mid]==2)
       { 
          int temp=arr[mid];
          arr[mid]=arr[high];
          arr[high]=temp;
          high--;
       }
       else
       {
          mid++;
       }
    }

    cout<<"arranged array:-"<<endl;
    for(int i=0;i<length;i++)
    {
         cout<<arr[i]<<" ";
    }
    return 0;
}