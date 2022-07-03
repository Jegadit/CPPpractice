#include<iostream>
using namespace std;

class construct
{
    private:
    int prod1,prod2,prod3,total=0;

    public:
    //constructor with parameters...
    construct(int p1, int p2, int p3=0)
    {
        prod1=p1;
        prod2=p2;
        prod3=p3;
    }
    //destructer...
    ~construct()
    {
        cout<<"\n destructed";
    }

    void updatetotal(int n)
    {
        if(n==1)
        {
            total=total+prod1;
        }
        else if(n==2)
        {
            total=total+prod2;
        }
        else
        {
            total=total+prod3;
        }
    }

    int payment()
    {
        return total;
    }
};

int main()
{
    construct rate(100,300,500);
    int x,y;
    cout<<"enter total amount of products brought \n";
    cin>>x;

    //loop for calculating total
    while(x!=0)
    {
        cout<<"which product did you buy ? \n"<<"1.product 1 \n"<<"2.product 2 \n"<<"3.product 3 \n";
        cin>>y;
        rate.updatetotal(y);
        --x;
    }

    //outputting the total
    cout<<"the total amount which is to be paid is: ";
    cout<<rate.payment();
    return 0;
}