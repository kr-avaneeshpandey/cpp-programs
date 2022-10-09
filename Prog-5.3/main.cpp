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
        cout<<"\nEnter  Amount: ";
        cin>>temp;
        ac_balance+=temp;
        cout<<"Operation Successful";
    }
    void withdraw()
    {
        int temp;
        cout<<"\nEnter Amount: ";
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
    int check(int x)
    {
        if (x==ac_no)
            return 1;
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
    bank b[10];
    int temp_ac;
    cout<<"****************Initializing Account Details ********************\n";
    for(int i=0;i<10;i++)
    {
        cout<<"\nCustomer "<<i+1<<endl;
        b[i].putdata();
    }
    cout<<"\n\n************** Account deposit *********** \nEnter Account Number: ";
    cin>>temp_ac;
    for(int i=0;i<10;i++)
    {
        if(b[i].check(temp_ac)==1)
        {
           b[i].deposit();
           b[i].getdata();
        }
    }
    cout<<"\n\n************** Account Withdraw *********** \nEnter Account Number: ";
    cin>>temp_ac;
    for(int i=0;i<10;i++)
    {
        if(b[i].check(temp_ac)==1)
        {
           b[i].withdraw();
           b[i].getdata();
        }
    }
    return 0;
}
