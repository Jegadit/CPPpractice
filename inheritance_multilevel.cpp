#include<iostream>
using namespace std;

class person
{
    protected:
    char name[20];
    int age;

    public:
    void getdetails();
};

class comp:public person
{
    protected:
    char comp[20];
    int est;

    public:
    void getcompdetails();
};

class sal:public comp
{
    protected:
    float salary;

    public:
    void getsaldetails();
    void show();
};


void person::getdetails()
{
    cout<<"\n enter your name: \n";
    cin>>name;
    cout<<"\n enter your age: \n";
    cin>>age;
}

void comp::getcompdetails()
{
    cout<<"\n enter the company name: \n";
    cin>>comp;
    cout<<"\n enter the estimation year of the company: \n";
    cin>>est;
}

void sal::getsaldetails()
{
    cout<<"\n enter your base salary: \n";
    cin>>salary;
}

void sal::show()
{
    cout<<endl<<name<<endl<<age<<endl<<comp<<endl<<est<<endl<<salary;
}

int main()
{
    sal o;
    o.getdetails();
    o.getcompdetails();
    o.getsaldetails();
    o.show();
    return 0;
}