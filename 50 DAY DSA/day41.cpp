//best time to buy & sell stock

#include<iostream>
using namespace std;

int main()
{
    int arr[]={7,1,5,3,6,4};
    int min = arr[0],profit=0,max=profit;

    for(int i=1;i<6;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        else
        {
            profit=arr[i]-min;

            if(profit>max)
            {
                max=profit;
            }
        }
    }
    cout<<"profit : "<<max;
}