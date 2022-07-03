#include<iostream>
using namespace std;

int fac(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}

int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    cout<<"the factorial of the number "<<num<<" is "<<fac(num);
    return 0;
}