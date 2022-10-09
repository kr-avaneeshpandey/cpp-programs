#include <iostream>

using namespace std;

class number
{
    int n;
public:
    number(int num)
    {
        n=num;
    }
    int operator ++() // functiuon as normal
    {
        n+=5;
        return n;
    }
    int operator *()
    {
        n*=n;
        return n;
    }
    void display()
    {
        cout<<"\n Value of n="<<n;
    }
};

int main()
{
    number obj_num(10);
    ++obj_num;                                  // operator overloading
    obj_num.display();
    *obj_num;
    obj_num.display();
    return 0;
}
