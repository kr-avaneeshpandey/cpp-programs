#include <iostream>

using namespace std;

class student
{
protected :
    int roll;
public:
    void get_roll()
    {
        cout<<"Enter Roll No. :";
        cin>>roll;
    }
    void disp_roll()
    {cout<<"Roll "<<roll<<endl;}
};

class test : public student
{
protected :
    float sub1,sub2;
public:
    void get_mark()
    {
        cout<<"Enter Marks of 2 Subject";
        cin>>sub1>>sub2;
    }
    void disp_mark(){cout<<"Sub1 :"<<sub1<<"\nSub2 :"<<sub2<<endl;}
};

class sports
{
    int point;
public:
    void get_point()
    {
        cout<<"Enter bonus points: ";
        cin>>point;}
    float put_point(){return point;};
};

class result : public test,sports
{
    float per;
public:
    void display()
    {
        per=(sub1+sub2)/2;
        get_point();
        per+=put_point();
        disp_roll();
        disp_mark();
        cout<<"Per :"<<per;
    }
};

int main()
{
    result R1;
    R1.get_roll();
    R1.get_mark();
    R1.display();
    return 0;
}
