#include<iostream>
using namespace std;

class calculator
{
    protected:
    int a,b;

    public:
    void getval()
    {
        cout<<"\nenter the value of a and b respectivly: ";
        cin>>a>>b;
    }
};

class addition:public calculator
{
    public:
    void add()
    {
        cout<<"the addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
};

class subtraction:public calculator
{
    public:
    void sub()
    {
        cout<<"the subtraction of "<<a<<" and "<<b<<" is "<<a-b;
    }
};

class multipication:public calculator
{
    public:
    void mul()
    {
         cout<<"the multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    }
};

class division:public calculator
{
    public:
    void div()
    {
         cout<<"the division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    }
};

int main()
{
    addition a;
    subtraction s;
    multipication m;
    division d;

    a.getval();
    a.add();
    s.getval();
    s.sub();
    m.getval();
    m.mul();
    d.getval();
    d.div();
    return 0;
}