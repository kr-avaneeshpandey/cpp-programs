#include <iostream>

using namespace std;

class student
{
     int roll;
     int marks;
    public:
     student(int r,int m)
     {
         roll=r;
         marks=m;
     }
     void display()
     {
         cout <<"\n roll="<<roll;
         cout<<"\n marks="<<marks;
     }
};

int main()
{
    int roll,marks;
    cout<<"Enter Student Roll No. : ";
    cin>>roll;
    cout<<"Enter student Marks: ";
    cin>>marks;
    student s1(roll,marks);          // parameterized constructor invoked implicity
    student s2=student(roll,marks);  // parameterized constructor invoked explicitly
    s1.display();
    s2.display();
    return 0;
}

