#include <iostream>

using namespace std;

class bank
{
    char name[20];
    int ac_no;
    char ac_type[3];
    int ac_balance;
public:
    void putdata();
    void deposit()
    {
        int temp;
        cout<<"\n*************** Account Deposit************\nEnter  Amount: ";
        cin>>temp;
        ac_balance+=temp;
        cout<<"Operation Successful";
    }
    void withdraw()
    {
        int temp;
        cout<<"\n\n************** Account Withdraw***********\nEnter Amount: ";
        cin>>temp;
        if (temp<=ac_balance)
        {
            ac_balance-=temp;
            cout<<"Operation Successful";
        }
        else
            cout<<"\nInsufficient Balance";
    }
    void getdata()
    {
        cout<<"\n\nAccount Holder Name: "<<name<<endl<<"Account Balance: "<<ac_balance;
    }
};

void bank :: putdata()
{
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter Account Number: ";
    cin>>ac_no;
    cout<<"Enter Account Type: ";
    cin>>ac_type;
    cout<<"Enter Account Balance: ";
    cin>>ac_balance;
}
int main()
{
    bank b;
    b.putdata();
    b.deposit();
    b.getdata();
    b.withdraw();
    b.getdata();
    return 0;
}
