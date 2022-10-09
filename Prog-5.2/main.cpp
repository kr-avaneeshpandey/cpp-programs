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
    void update()
    {
        float temp_value;
        int temp_i,temp_j;
        cout<<"\n\n************* Updation of element *************\n\nEnter index of the element(V[i][j]): ";
        cin>>temp_i>>temp_j;
        cout<<"Enter new value: ";
        cin>>temp_value;
        V[temp_i][temp_j]=temp_value;
        cout<<"\nValue updated successfully";
    }
    void multiply()
    {
        float temp_scalar;
        cout<<"\n\n************ Multiplication with scalar *************\n\nEnter the scalar: ";
        cin>>temp_scalar;
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                V[i][j]*=temp_scalar;
            }
        }
        cout<<"\nMultiplied with given scalar successfully";
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
};

int main()
{
    Vector v;
    v.putdata();
    v.display();
    v.update();
    v.display();
    v.multiply();
    v.display();
    return 0;
}
