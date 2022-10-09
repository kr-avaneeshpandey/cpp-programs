#include <iostream>
#define factor 0.3048

using namespace std;

class DB;
class DM
{
    float d;
public:
    void getdata(float x)
    {
        d=x;
    }
    void display()
    {
        float temp_m,temp_cm;
        temp_m=int(d);
        temp_cm=(d-int(d))*100;
        cout<<"Distance is "<<temp_m<<" meters and "<<temp_cm<<" centimeters";
    }
    friend void add(DM,DB);
};

class DB
{
    float d1;
public:
    void getdata(float y)
    {
        d1=y;
    }
    void display()
    {
        float temp_feet,temp_inch;
        temp_feet=int(d1);
        temp_inch=(d1-int(d1))*12;
        cout<<"Distance is "<<temp_feet<<" feet and "<<temp_inch<<" inches";
    }
    friend void add(DM,DB);
};

void add(DM a,DB b)
{
    float sum_m,sum_f;
    int choice;
    sum_m=a.d+b.d1*factor;
    sum_f=sum_m/factor;
    DM a1;
    DB b1;
    a1.getdata(sum_m);
    b1.getdata(sum_f);
    cout<<"Press 1 to display result in meters\n";
    cout<<"Press 2 to display result in feet\n";
    cin>>choice;
    if (choice==1)
    {
        a1.display();
    }
    else if(choice==2)
        b1.display();
}

int main()
{
    DM A;
    DB B;
    float temp_m,temp_f;
    cout<<"Enter Distance (in meters): ";
    cin>>temp_m;
    cout<<"Enter Distance (in feet): ";
    cin>>temp_f;
    A.getdata(temp_m);
    B.getdata(temp_f);
    add(A,B);
    return 0;
}
