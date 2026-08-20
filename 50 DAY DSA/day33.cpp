//koko eating banana

#include<iostream>
using namespace std;

int main(){
    int nums[]={3,6,7,11};
    int h=8;

    int low=0;
    int high=0;
    for(int i=0;i<4;i++)
    {
        if(high<nums[i])
        {
            high=nums[i];
        }
    }

    while(low<=high)
    {
        int mid=(low+high)/2;
        int hour=0;

        for(int i=0;i<4;i++)
        {
            hour+=(nums[i]+mid-1)/mid;
        }

        if(hour<=h)
        {
            high=mid-1;
        }
        
        else
        {
            low=mid+1;
        }
    }

    cout<<"min to bunch eat in a hour "<<low;
}