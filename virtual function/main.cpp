#include <iostream>

using namespace std;

class base
{
public:
    void display(){cout<<"\n Display base";}
    virtual void show(){cout<<"\n show base";}
};

class derived : public base
{
public:
    void display(){cout<<"\n Display derived";}
    void show(){cout<<"\n show derived";}
};

int main()
{
    base B;
    derived D;
    base *bptr;

    cout<<"\n bptr points to base\n";
    bptr=&B;
    bptr->display();                              //call base version
    bptr->show();                                 //call base version
    cout<<"\n\n bptr points to derived\n";
    bptr=&D;
    bptr->display();                              //call base version
    bptr->show();                                 //call derived version
    return 0;
}
