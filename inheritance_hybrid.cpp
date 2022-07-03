#include<iostream>
using namespace std;

class employee
{
    protected:
    int empid;
    char name[20];

    public:
    void getempdetails()
    {
        cout<<"\nenter your name: ";
        gets(name);
        cout<<"\nenter your employee id: ";
        cin>>empid;
    }
};

class basesalary:virtual public employee
{
    protected:
    float sal;

    public:
    void getsaldetails()
    {
        cout<<"\nenter your base salary: ";
        cin>>sal;
    }
};

class overtime:virtual public employee
{
    protected:
    float overt;

    public:
    void getovertimedetails()
    {
        cout<<"\nenter how many hours you have worked overtime: ";
        cin>>overt;
    }
};

class totalsalary:public basesalary,public overtime
{
    protected:
    float totalsal;

    public:
    void salcalculation()
    {
        if(overt>500)
        {
            totalsal=sal+10000;
        }
        else if(overt<40&&overt>30)
        {
            totalsal=sal+5000;
        }
        else if(overt<30&&overt>20)
        {
            totalsal=sal+1000;
        }
        else if(overt<10&&overt>5)
        {
            totalsal=sal+500;
        }
        else
        {
            totalsal=sal;
        }
    }
    
    void show()
    {
        cout<<"the details of the employee "<<name<<": \n"
        <<"employee ID: "<<empid<<endl
        <<"base salary: "<<sal<<endl
        <<"total overtime in hours: "<<overt<<endl
        <<"the month's salary: "<<totalsal;
    }
};

int main()
{
    totalsalary o;
    o.getempdetails();
    o.getsaldetails();
    o.getovertimedetails();
    o.salcalculation();
    o.show();
    return 0;
}