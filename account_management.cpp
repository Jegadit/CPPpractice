#include<iostream>
using namespace std;

class account
{
    private:
    //variable declaration
    int accno;
    char name[20],address[50];
    float balance;
    char acctype;

    public:
    //constructer
    account()
    {
        balance=0;
    }

    //details
    void details()
    {
        cout<<"enter the name: "<<endl;
        gets(name);
        cout<<"Enter address: "<<endl;
        gets(address);
        cout<<"enter the account number: "<<endl;
        cin>>accno;
        cout<<"enter the account type: "<<endl;
        cin>>acctype;
    }

    //deposit
    void deposit()
    {
        cin>>balance;
    }

    //withdraw amount intput
    void witham()
    {
        float amount;
        cin>>amount;
        withdraw(amount);
    }

    //withdraw
    void withdraw(float am)
    {
        if(acctype=='f'&&am<=balance)
        {
            balance=balance-am;
        }
        else if(acctype=='s'||acctype=='c'&&am>1000&&am<=balance)
        {
            balance=balance-am-((3*am)/100);
        }
        else
        {
            cout<<"enter a valid amount \n";
            return witham();
        }
    }

    //to show all the details after the program
    void show()
    {
        cout<<"the total details of the customer is specified: \n";
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Account number: "<<accno<<endl;
        cout<<"Account type: "<<acctype<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{
    account a;

    cout<<"welcome to AVP Bank\n\n\n";
    a.details();
    cout<<"enter the deposited/depositing amount\n";
    a.deposit();
    cout<<"enter the amount to be withdrawn\n";
    a.witham();
    cout<<"\n\n\nthe details of the account holder\n\n\n";
    a.show();

    return 0;
}