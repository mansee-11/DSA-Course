//Find all pairs with a given sum

#include<iostream>
#include <unordered_set>
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
    cout<<"enter the sum:- ";
    cin>>target;

    cout<<"pairs are:- ";
    unordered_set<int> map;
    for(int i=0;i<n;i++)
    {
        int diff=target-arr[i];
        if(map.find(diff)!=map.end())
        {
            cout<<"("<<diff<<","<<arr[i]<<") ";
        }
        map.insert(arr[i]);
    }
}