#include <iostream>
#include <math.h>

using namespace std;

class SI_CI
{
    float amount;
    float rate;
    int time;
public:
    void getdata(float p,float r,int t)
    {
        this->amount=p;
        this->rate=r;
        this->time=t;
    }
    void SI()
    {
        cout<<"\nSimple interest is "<<(amount*rate*time);
    }
    void CI()
    {
        cout<<"\nCompound Interest is "<<(amount*(pow((1+rate),time))-amount);
    }
};
int main()
{
    SI_CI A;
    float temp_p,temp_r;
    int temp_t;
    cout<<"Enter principle amount :";
    cin>>temp_p;
    cout<<"Enter interest rate(in decimal form i.e 5% = 0.05): ";
    cin>>temp_r;
    cout<<"Enter period of investment: ";
    cin>>temp_t;
    A.getdata(temp_p,temp_r,temp_t);
    A.SI();
    A.CI();
    return 0;
}
