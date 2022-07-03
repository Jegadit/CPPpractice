#include<iostream>
using namespace std;

class a
{
    private:
    int a;

    public:
    void geta()
    {
        cout<<"enter the value of the first number \n";
        cin>>a;
        cout<<"the value from the first class after inheritance is "<<a<<endl;
    }
};

class b:public a
{
    private:
    int b;

    public:
    void getb()
    {
        cout<<"enter the value of second number \n";
        cin>>b;
        cout<<"the value from the second class after inheritance is "<<b;
    }
};

int main()
{
    b o;
    o.geta();
    o.getb();
    return 0;
}