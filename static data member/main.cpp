#include<iostream>

using namespace std;

class student
{
    int roll;
    static int Count;
public:
    void getdata()
    {
        cout<<"Enter the roll number of student :";
        cin>>roll;
        Count++;
    }
    static void display()
    {
       cout<<"The total number of student are :"<<Count;
    }
};

int student :: Count;

int main()
{
    student s1,s2,s3,s4;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s4.getdata();
    student :: display();
    return 0;
}
