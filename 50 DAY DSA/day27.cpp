//remove duplicate from sorted array

#include<iostream>
using namespace std;

int main(){
    int nums[]={1,2,2,2,3,4,4,6,7,7,7,7};

    int count=0;
    int i=1;
    
    while(i<sizeof(nums)/sizeof(nums[0])-count)
    {
        if(nums[i]==nums[i-1])
        {
            count++;
            for(int j=i;j<sizeof(nums)/sizeof(nums[0])-count;j++)
            {
                nums[j]=nums[j+1];
            }
        }
        else{
            i++;
        }
    }

    for(int k=0;k<sizeof(nums)/sizeof(nums[0])-count;k++)
    {
        cout<<nums[k]<<" ";
    }
}