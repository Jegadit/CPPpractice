#include<iostream>
using namespace std;

int main()
{
    int x,y,op;
    cout<<"enter two numbers for arithmetic calculation \n";
    cin >> x >> y;
    cout<<"enter what you want to do with the simple calculator"<<endl<<"1.addition \n"<<"2.subraction \n"<<"3.multiplication \n"<<"4.division \n";
    cin>>op;
    switch (op)
    {
    case 1:
        cout<<" the addition of "<<x<<" and "<<y<<" is \nḥ"<<x+y;
        break;
    
    case 2:
    if (x<y)
    {
        cout<<" the subtraction of "<<x<<" and "<<y<<" is \n"<<x-y<<" (negative subtraction ["<<x<<"-"<<y<<"]) and "
        <<y-x<<" (positive subtraction ["<<y<<"-"<<x<<"])";
    }
    else
        cout<<" the subtraction of "<<x<<" and "<<y<<" is \n"<<x-y;
        break;

    case 3:
        cout<<" the multiplication of "<<x<<" and "<<y<<" is \n"<<x*y;
        break;

    case 4:
        cout<<" the division of "<<x<<" and "<<y<<" is \n"<<x/y;
        break;    
    default:
        cout<<"enter a correct option !!";

        break;
    }
    return 0;
}