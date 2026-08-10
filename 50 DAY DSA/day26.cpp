//container with most water

#include<iostream>
using namespace std;

int main(){
    int height[] ={8,4,2,7,6,1};

    int maxwater=0;
    int i=0, j =sizeof(height)/sizeof(height[0])-1;

    while(i<j){
        int water=0;
        int width=j-i;

        if(height[i]<height[j])
        {
            water=height[i]*width;
        }
        else{
            water=height[j]*width;
        }
        if(water>maxwater){
            maxwater=water;
        }

        if(height[i]<height[j])
        {
            i++;
        }
        else{
            j--;
        }
    }

    cout<<"water contain "<<maxwater;
}