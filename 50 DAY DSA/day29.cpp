//sort 3 colors 0s, 1s & 2s

#include<iostream>
using namespace std;

int main(){
    int nums[]={2,2,1,0,2,1,0,0,1};

    int low=0,mid=0,high=sizeof(nums)/sizeof(nums[0])-1;

    while(mid<high){
        if(nums[mid]==0)
        {
            nums[mid]=nums[low];
            nums[low]=0;
            low++;
        }
        else if (nums[mid]==2)
        {
            nums[mid]=nums[high];
            nums[high]=2;
            high--;
        }
        else{
            mid++;
        }
    }
    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++)
    {
        cout<<nums[i]<<" ";
    }
}