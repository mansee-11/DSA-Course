//leetcode 219- contain duplicate II

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int nums[]={1,2,3,1,2,3};
    int k=2;

    unordered_map<int,int> mp;

    for(int i=0;i<6;i++)
    {
        if(mp.find(nums[i])!=mp.end())
        {
            if(i-mp[nums[i]]<=k)
            {
                cout<<"true";
                return 0;
            }
            mp[nums[i]]=i;
        }
    }
    cout<<"false";
    return 0;
}