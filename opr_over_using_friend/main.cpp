#include <iostream>

using namespace std;

const int Size =3;

class Vector
{
    int v[Size];
public:
    Vector();                                                      // default constructor
    Vector(int *x);                                                // parameterized constructor
    friend Vector operator * (Vector b,int a);                     // friend
    friend istream & operator >> (istream &,Vector &);
    friend ostream & operator << (ostream &,Vector &);
};

Vector :: Vector ()
{
    for (int i=0;i<Size;i++)
	v[i]=0;
}

Vector :: Vector (int *x)
{
    for (int i=0;i<Size;i++)
	v[i]=x[i];
}

Vector operator *(Vector b,int a)
{
    Vector c;
    for (int i=0;i<Size;i++)
	c.v[i]=b.v[i]*a;
    return c;
}

istream & operator >> (istream &din,Vector &b)
{
    for (int i=0;i<Size;i++)
	din >> b.v[i];
    return (din);
}

ostream & operator << (ostream &dout,Vector &b)
{
    dout << "(" << b.v[0];
    for (int i=1;i<Size;i++)
	dout <<", " << b.v[i];
    dout << ")";
    return (dout);
}

int x[Size]={2,4,6};

int main()
{
    Vector m;                                              // invoked default constructor
    Vector n=x;                                            // invoked parameterized constructor
    cout <<"Enter element of vector m"<< "\n";
    cin>>m;                                                // invokes operator >>()
    cout<<"\n";
    cout<<"m = " << m << "\n";                             // invokes operator <<()
    Vector p,q;
    p=m*2;
    q=n*2;
    cout<<"\n";
    cout<<"p = " << p << "\n";
    cout<<"q = "<< q << "\n";
    return 0;
}
