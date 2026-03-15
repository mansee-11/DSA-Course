//Find duplicate number in array

#include<iostream>
#include<unordered_set>
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

    unordered_set<int> set;

    for(int i=0;i<n;i++)
    {
        if(set.find(arr[i])!=set.end())
        {
            cout<<"duplicate in array is "<<arr[i];
            break;
        }
        set.insert(arr[i]);
    }
}