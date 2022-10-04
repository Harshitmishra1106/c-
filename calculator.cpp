#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,o,b;
    cout<<"Welcome to the calculator\n";
    cout<<"enter first operand a";
    cin>>a;
    cout<<"\npress 1 for add\npress 2 for subtract\npress 3 for multiply\npress 4 for divide\n";
    cin>>o;
    cout<<"enter second operand b\n";
    cin>>b;
    switch (o)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<float(a)/float(b);
        break;
    default:
        cout<<"Invalid operation"<<"👿👿👿😡😡";
        break;
    }
    return 0;
}
