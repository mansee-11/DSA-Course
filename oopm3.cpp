#include<iostream>
using namespace std;
/*
int main()
{
    int x=3;
    try
    {
        if(x==0)
        {
            throw -1;
        }
        else if(x==1)
        {
            throw 0.0f;
        }
        else if(x==2)
        {
            throw "error";
        }
        else 
        {
            throw '$';
        }
    }
    catch(int e)
    {
        cout <<"integer error";
    }
    catch(float e)
    {
        cout<<"fractional error";
    }
    catch(const char* e)        //use const char* in place of string 
    {
        cout<<"string error";
    }
    catch(...)          //everything other then given conditions
    {
        cout<<"unknown error";
    }
}*/
//to check weather a person can vote or notnegative age ,overage exception
int main()
{
    int age;
    cout<<"enter your age:-";
    cin>>age;
    try
    {
        if(age<0)
        {
            throw -1;
        }
        else if (age >120)
        {
            throw 0;
        }
        else if(age <18 && age>0)
        {
            cout<<"you can't vote";
        }
        else if(age >=18)
        {
            cout<<"you can vote";
        }
        else
        {
            throw 1;
        }
    }
    catch(int e)
    {
        if(e==-1) cout<<"negetive age input\n";
        else if(e==0) cout<<"you are overage\n";
        else cout<<"unknown error\n";
    }
}
