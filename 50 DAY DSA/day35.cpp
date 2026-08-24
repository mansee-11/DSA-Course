//maximum subarray sum

#include <iostream>
using namespace std;

int main()
{
    int nums[]={3,-4,5,4,-1,7,-8};

    int curr_sum=nums[0];
    int max=nums[0];
    for(int i=1;i<7;i++)
    {
        if(nums[i]>curr_sum+nums[i])
        {
            curr_sum=nums[i];
        }
        else
        {
            curr_sum+=nums[i];
        }

        if(curr_sum>max)
        {
            max=curr_sum;
        }
    }

    cout<<"max sum "<<max;
}
