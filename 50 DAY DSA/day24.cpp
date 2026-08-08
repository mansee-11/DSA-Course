//rain water trap

#include<iostream>
using namespace std;

int main(){

    int height[]={4,2,0,3,2,5};

    int left[6],right[6];

    left[0]=height[0];
    for (int i = 1; i < 6; i++)
    {
        if(left[i-1]>height[i]){
            left[i]=left[i-1];
        }
        else{
            left[i]=height[i];
        }
    }

    right[5]=height[5];
    for (int i = 4; i >=0; i--)
    {
        if(right[i+1]>height[i]){
            right[i]=right[i+1];
        }
        else{
            right[i]=height[i];
        }
    }
    int water=0;
    for(int i=0;i<6;i++)
    {
        if(left[i]>right[i]){
            water+=right[i]-height[i];
        }
        
        else{
            water+=left[i]-height[i];
        }
    }
    cout<<"water trapped "<<water;
}
