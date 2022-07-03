#include<iostream>
using namespace std;

class a
{
    public:
    a(int m)
    {
        cout<<"inside constructor in class A , the value from the input is "<<m<<endl;
    }
    ~a()
    {
        cout<<"exiting the constructor for class A \n";
    }
};

class b
{
    public:
    b(int n)
    {
        cout<<"inside constructor in class B, the value from the input is "<<n<<endl;
    }
    ~b()
    {
        cout<<"exiting the constructor for class B \n";
    }
};

class c:public a,public b
{
    public:
    c(int o, int p,int q,int r):a(o),b(p*2)
    {
        cout<<"inside constructor in C, the values from the input is "<<q<<" and "<<r<<endl;
    }
    ~c()
    {
        cout<<"exiting the constructor for class C \n";
    }
};

int main()
{
    c obj(10,20,30,40);
    return 0;
}