#include<iostream>
using namespace std;

class tourist
{
    private:
    int cno;
    char ctype;
    float perkm,distance;

    public:
    tourist()
    {
        ctype='a';
        cno=0;
    }
    void citycharges()
    {
        if(ctype=='a')
        {
            perkm=20;
        }
        else if(ctype='b')
        {
            perkm=18;
        }
        else if(ctype='c')
        {
            perkm=15;
        }
    }
    void registercab()
    {
        cout<<"enter the cab no.: ";
        cin>>cno;
        cout<<"enter the cab type: \n"<<"a. sedan \n"<<"b. suv \n"<<"c. compact \n";
        cin>>ctype;
        citycharges();
    }
    void display()
    {
        cout<<"enter the distance to be travelled: ";
        cin>>distance;
        cout<<"the total registration results are specified below: \n";
        cout<<" cab number: "<<cno<<endl;
        cout<<" cab type: "<<ctype<<endl;
        cout<<" amount: "<<perkm*distance<<endl;
    }
};

int main()
{
    tourist t;
    t.registercab();
    t.display();
    return 0;
}