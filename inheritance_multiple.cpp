#include<iostream>
using namespace std;

class experience
{
    protected:
    int exp;
    string name[20];

    public:
    void getexp()
    {
        cout<<"enter your name: ";
        cin>>name[20];
        cout<<"\n enter your experience in years: ";
        cin>>exp;
    }
};

class salary
{
    protected:
    float sal;

    public:
    void getsal()
    {
        cout<<"\n enter your base salary: ";
        cin>>sal;
    }
};

class promotion : public experience,public salary
{
    public:
    void pro()
    {
        if(exp>2)
        {
        if(sal>=20000)
        {
            cout<<"you are promoted and got 5% raise !! \n";
            sal=sal+((5/100)*sal);
        }
        else if(sal<15000)
        {
            cout<<"you got promoted and got a 10% raise !! \n";
            sal=sal+((10/100)*sal);
        }
        }

        else if(exp<2)
        {
            cout<<"please wait to get a minimum experience of 2 years for the promotion: \n";
        }

        else
        {
            return getsal();
        }
    }
};

int main()
{
    promotion o;
    o.getexp();
    o.getsal();
    o.pro();
    return 0;
}