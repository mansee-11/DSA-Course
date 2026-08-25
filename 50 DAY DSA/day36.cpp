//pair sum

#include<iostream>
using namespace std;

int main()
{
    int nums[]={2,7,11,15};
    int target=18;

    int i=0,j=3;

    while(i<j)
    {
        if(nums[i]+nums[j]==target)
        {
            cout<<i<<" "<<j;
            return 0;
        }

        else if(nums[i]+nums[j]>target)
        {
            j--;
        }

        else
        {
            i++;
        }
    }

    cout<<"no pait found";
    return 0;
}