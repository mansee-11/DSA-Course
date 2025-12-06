#include<iostream>
#include<exception>
using namespace std;
class InsufficientFundException:public exception
{
    private:
        double balance,amount;
    public:
        InsufficientFundException(double b,double a)
        {
            balance =b;
            amount=a;
        }
        //override exception class method "what"
        const char* what() const noexcept override
        {
            return "overdraft exception \n";
        }
        void getdetails()
        {
            cout<<"acc balance: "<<balance<<"\n";
            cout<<"amount requested: "<<amount<<"\n";
            cout<<"shortage: "<<amount-balance<<"\n";
        }
};
class Account
{
    private:
        double balance;

    public:
        Account(double balance):balance(balance)
        {
            cout<<"new account created, balance = "<<balance<<"\n";
        }
        void withdraw(double amount)
        {
            try
            {
                if(amount >balance)
                {
                    throw InsufficientFundException(balance,amount);
                }
                balance-=amount;
            }
            catch (InsufficientFundException &e)
            {
                cout<<e.what();
                e.getdetails();
            }
            catch(exception &e)
            {
                e.what();
            }
        }
};

int main()
{
    Account a(200.00);
    a.withdraw(50);
    a.withdraw(500);
}