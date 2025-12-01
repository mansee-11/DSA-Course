#include <iostream>
using namespace std;

class appliance
{
    public:
        appliance(){
            cout<<"applience created\n";
        }
        virtual ~appliance(){  //use virtual distructor in perent class so at the end obj of child will be distroyed
            cout<<"applience destroyed\n";
        }

        virtual void start()
        {
            cout<<"generic appliance\n";
        }
};
class toaster:public appliance
{
    public:
        toaster(){
            cout<<"toaster created\n";
        }
        ~toaster(){
            cout<<"toaster destroyed\n";
        }

        void start()
        {
            cout<<"Toaster coils heating up\n";
        }

};
class oven:public appliance
{
    public:
        oven(){
            cout<<"oven created\n";
        }
        ~oven(){
            cout<<"oven destroyed\n";
        }
        void start()
        {
            cout<<"oven Preheating\n";
        }

};
void runappliance(appliance *ptr)
{
    ptr->start();
}
int main()
{
    /*
    appliance *t=new toaster;
    appliance *o=new oven;
    runappliance(t);
    runappliance(o);

    appliance *a[2]={new toaster,new oven};
    for(int i=0;i<2;i++)
    {
        runappliance(a[i]);
    }
    
    oven obj;   //static object
    */
    appliance *a=new oven();
    delete a; 
}
