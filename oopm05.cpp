#include<thread>
#include<iostream>
#include<mutex>
using namespace std;
mutex mtx;
void task(int id)
{
    for(int i=0;i<10;i++)
    {
        lock_guard<mutex> lock(mtx);
        cout<<"task run by thread "<< id << "\n";
    }
}
int main()
{
    thread t1(task,1);
    thread t2(task,2);

    t1.join();
    t2.join();

    
    /*to avoid the race condition between 
    two or more threads we should thave metual 
    exclusion between these two theads in cpp this
    is implemented using an object called mutex. 
    mutex is like a lock that is applied to a 
    resourse by a thread during the time it is being used */
    cout<<"main thread ends\n";
}