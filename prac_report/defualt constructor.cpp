#include <iostream>

using namespace std;

class student
{
     int roll;
     int marks;
    public:
     student()
     {
         roll=2122028;
         marks=47;
     }
     void display()
     {
         cout <<"\n roll="<<roll;
         cout<<"\n marks="<<marks;
     }
};
int main()
{
    student s1;   // defualt constructor invoked
    s1.display();
    return 0;
}
