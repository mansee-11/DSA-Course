// Kadane's Algorithm - Maximum Subarray Sum

#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int n;

    cout << "enter no. of element in array:-";
    cin >> n;

    cout << "enter element of array one by one:-";
    for (int i=0; i<n; i++)
    {
        cin >>arr[i];
    }

    int sum=arr[0];
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(sum+arr[i]>arr[i])
        {
            sum+=arr[i];
        }
        else
        {
            sum=arr[i];
        }
        if(max<sum)
        {
            max=sum;
        }
    }

    cout<<"Maximum Subarray Sum = "<<max;
    return 0;
}