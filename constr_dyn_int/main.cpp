#include <iostream>

using namespace std;

class Fixed_deposit
{
     long int P_amount;     // Principle amount
     int years;             // Period of investment
     float rate;            // interest rate
     float R_value;
    public:
        Fixed_deposit(){}
        Fixed_deposit(long int p,int y,float r=0.12);
        Fixed_deposit(long int p,int y,int r);
        void display(void);
};

Fixed_deposit ::Fixed_deposit(long int p,int y,float r)
{
    P_amount=p;
    years=y;
    rate=r;
    R_value=P_amount;
    for (int i=1;i<=y;i++)
        R_value*=1.0+r;
}

Fixed_deposit ::Fixed_deposit(long int p,int y,int r)
{
    P_amount=p;
    years=y;
    rate=r;
    R_value=P_amount;
    for (int i=1;i<=y;i++)
        R_value*=1.0+float(r)/100;
}

void Fixed_deposit ::display(void)
{
    cout<<endl<<"Principle Amount ="<<P_amount<<endl<<"Return value ="<<R_value<<endl;
}
int main()
{
    Fixed_deposit FD1,FD2,FD3;       // deposits created
    long int p;                      // principal amount
    int y,R;                         // interest period (y) and interest rate percentage form (R)
    float r;                         // interest rate, decimal form
    cout<<"Enter amount, period,interest rate(in %)"<<endl;
    cin>>p>>y>>R;
    FD1=Fixed_deposit(p,y,R);

    cout<<"Enter amount, period,interest rate(in decimal form)"<<endl;
    cin>>p>>y>>r;
    FD2=Fixed_deposit(p,y,r);

    cout<<"Enter amount and period "<<endl;
    cin>>p>>y;
    FD3=Fixed_deposit(p,y);

    cout<<endl<<"Deposit 1";
    FD1.display();

    cout<<endl<<"Deposit 2";
    FD2.display();

    cout<<endl<<"Deposit 3";
    FD3.display();

    return 0;
}
