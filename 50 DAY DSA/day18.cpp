//Trapping Rain Water

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no. of elements = ";
    cin>>n;

    int height[n];
    cout<<"enter elements one by one:-\n";
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }

    int leftmax[n],rightmax[n];

    leftmax[0]=height[0];
    for(int i=1;i<n;i++)
    {
        if(height[i]>leftmax[i-1])
        {
            leftmax[i]=height[i];
        }
        else
        {
            leftmax[i]=leftmax[i-1];
        }
    }

    rightmax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(height[i]>rightmax[i+1])
        {
            rightmax[i]=height[i];
        }
        else
        {
            rightmax[i]=rightmax[i+1];
        }
    }

    int minheight , water=0;
    for(int i=0;i<n;i++)
    {
        if(leftmax[i]<rightmax[i])
        {
            minheight=leftmax[i];
        }
        else
        {
            minheight=rightmax[i];
        }

        water+=minheight-height[i];
    }

    cout<<"water trapped = "<<water;
}