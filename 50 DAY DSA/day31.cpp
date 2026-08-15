//count consicutive one

#include<iostream>
using namespace std;

int main(){
    int nums[]={1,0,1,1,0,1,1,1,0,0,0,1,1};

    int count=0,max=0;
    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++)
    {
        if(nums[i]==1)
        {
            count+=1;
        }
        else{
            count=0;
        }
        if(count>max)
        {
            max=count;
        }
    }
    cout<<"max = "<<max;
    return 0;
}