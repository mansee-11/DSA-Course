//Search in a row-wise and column-wise sorted matrix


#include<iostream>
using namespace std;

int main(){

    int m[3][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16}};
    int key=21;

    int i=0,j=3;
    
    while(i<3 && j>=0)
    {
        if(key==m[i][j])
        {
            cout<< "i : "<<i<<" j : "<<j;
            return 0;
        }
        else if (key<m[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}
