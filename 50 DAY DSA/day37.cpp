//mazority element

#include<iostream>
using namespace std;

int main(){
    int nums[]={1,2,2,1,0,1,1,0,1};
    
    int freq=0,x=0;
    for(int i=0;i<9;i++)
    {
        if(freq==0)
        {
            x=nums[i];
        }
        if(nums[i]!=x)
        {
            freq--;
        }
        else
        {
            freq++;
        }
    }
    cout<<x;
    return 0;
}