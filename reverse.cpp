#include<iostream>
using namespace std;

int reverse(int n,int r)
{
    if(n==0)
    {
        return r;
    }
    else
    {
        r=r*10+(n%10);     
    }
    return reverse(n/10,r);
}

int main()
{
    int n,r=0;
    cout<<"enter a two or three digit number !! \n";
    cin>>n;
    cout<<"the reverse of the number "<<n<<" is "<<reverse(n,r);
    return 0;
}