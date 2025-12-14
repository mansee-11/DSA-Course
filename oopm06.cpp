#include<iostream>
using namespace std;
class Author
{
    private:
        string name;
        string email;
        char gender;
    public:
    Author(string name="NULL",string email="NULL",char gender='N')
    {
        this->name=name;
        this->email=email;
        this->gender=gender;
    }
    string getname()
    {
        return name;
    }
    string getemail()
    {
        return email;
    }
    string toString()
    {
        string authordetails= "Author[name= "+name+" ,email= "+email+" ,gender= "+gender+"]";
        return authordetails;
    }
};

class Book
{
    private:
        string name;
        Author author;
        double price;
        int quantity;
    public:
    Book(string name,Author author,double price,int quantity)
    {
        this->name=name;
        this->author=author;
        this->price=price;
        this->quantity=quantity;
    }  
    int getqty()
    {
        return quantity;
    }    
    int getprice()
    {
        return price;
    }
    void setprice(double price)
    {
        this->price=price;
    }
    void setqty(int quantity)
    {
        this->quantity=quantity;
    }
    string toString()
    {
        string bookdetails="Book [name= "+name+" ,"+author.toString()+",price = "+to_string(price)+" ,quantity = "+to_string(quantity)+"]";
        return bookdetails;
    }
};

int main()
{
    Author a("Mansee Asati","silochanaasati30@gmail.com",'F');
    Book b("Real Living",a,100.00,1123);
    cout<<b.toString();
}