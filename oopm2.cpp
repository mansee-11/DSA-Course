#include<iostream>
using namespace std;

class shape{
    public:
    virtual void draw()=0; //pure virtual function
    virtual void display(){
        cout<<"print shape";
    }
};

class square:public shape{
    public:
    void draw(){
        cout<<"square drawn\n";
    }
};

class circle:public shape{
    public:
    void draw(){
        cout<<"circle drawn\n";
    }
};

int main(){
    //shape s; 
    //an abstract class in c++ can't be created by making atleast one purevertual function in it
    //an abstract class can't be instantiated

    //square s; 
    //any class that inherits an abstract class must implement all the pure virtual function of the perent class, 
    //otherwise this drived class also become an abstract class

    square s;
    s.draw();

    shape *s1=new square();
    shape *s2=new circle();

    s1->draw();
    s2->draw();

    s1->display();
}