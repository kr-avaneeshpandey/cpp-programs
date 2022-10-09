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
     student (student &x)
     {
         roll=x.roll;
         marks=x.marks;
     }
};

int main()
{
    int roll,marks;
    cout<<"Enter Student Roll No. : ";
    cin>>roll;
    cout<<"Enter student Marks: ";
    cin>>marks;
    student s1(roll,marks);   // parameterized constructor invoked
    student s2(s1);           // copy constructor invoked
    student s3=s1;            // copy constructor invoked
    s2.display();
    return 0;
}
