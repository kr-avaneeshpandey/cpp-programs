#include <iostream>

using namespace std;

class binary_opr_overloading
{
    int Local_int;
public:
    binary_opr_overloading(int j)
    {
        Local_int=j;
    }
    int operator + (int j)
    {
        return (Local_int+j);
    }
    int operator + (binary_opr_overloading &Obj)
    {
        return (Local_int+Obj.Local_int);
    }
};
int main()
{
    binary_opr_overloading object1(10),object2(20);
    cout<<object1+10<<endl;
    cout<<object1+object2;
    return 0;
}
