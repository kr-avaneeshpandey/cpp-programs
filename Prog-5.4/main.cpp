#include <iostream>

using namespace std;

class Vector
{
    float V[3][3];
public:
    void putdata()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<"Enter value at V["<<i<<"]["<<j<<"]: ";
                cin>>V[i][j];
            }
        }
    }
    void display()
    {
        cout<<"\n\n************ Vector Display ***************\n\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<V[i][j]<<", ";
            }
        }
    }
    void add(Vector,Vector);
};

void Vector :: add(Vector va,Vector vb)
{
    for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                V[i][j]=va.V[i][j]+vb.V[i][j];
            }
        }
}

int main()
{
    Vector v1,v2,v3;
    v1.putdata();
    v2.putdata();
    v3.add(v1,v2);
    v1.display();
    v2.display();
    v3.display();
    return 0;
}
