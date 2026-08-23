#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v ={1,2,4,4,3,2,1,6,3};
    // vector<int> vec(3,0);
    // cout<<v[0]<<"\n";
    // cout<<vec[0];

    int ans=0;

    for(int i:v)
    {
        ans^=i;
    }

    cout<<"single number : "<<ans;
}