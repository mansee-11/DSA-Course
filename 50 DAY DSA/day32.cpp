//minimum in sorted rotated array

#include<iostream>
using namespace std;

int main()
{
    int nums[]={4,5,6,7,1,2,3};

    int min=nums[0];

    for(int i=0;i<7;i++)
    {
        if(nums[i]<min)
        {
            min=nums[i];
        }
    }

    cout<<min;
}