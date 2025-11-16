#include <iostream>
using namespace std;
int main()
{
    cout<<"DSA by apna college"<<endl;
    // type conversion (implecit)
    char a='m';
    int b=a;
    cout<<a<<"\n"<<b<<"\n";
    // type casting
    double price=100.99;
    int newprice=(int) price;
    cout<<price<<"\n"<<newprice<<"\n";
    return 0;

    //uranary operator
    
    int x=10;
    int y=x++;  // post incriment first assign then increment
    cout<<x<<"\n"<<y;

    y=++x;      //pre increment first increment then assign
    cout<<x<<"\n"<<y;
}
