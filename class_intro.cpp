#include<iostream>
using namespace std;

class halo
{
    private:
    int money=0;

    public:
    void updatemoney()
    {
        money=money+5;
    }
    int printamount()
    {
        return money;
    }
};

int main()
{
    halo obj;
    obj.updatemoney();
    cout<<obj.printamount();
    return 0;
}