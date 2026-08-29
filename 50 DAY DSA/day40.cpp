//remove duplicate

#include<iostream>
using namespace std;

int main()
{
    int nums[]={2,3,4,4,4,5,6};

    int j=0;

    for(int i=1;i<7;i++)
    {
        if(nums[i]!=nums[j])
        {
            j++;
            nums[j]=nums[i];
        }
    }

    for(int i=0;i<=j;i++)
    {
        cout<<nums[i]<<" ";
    }
}