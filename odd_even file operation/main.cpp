#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int num,i,n;
    ofstream ofile;
    ofile.open("Number.txt");
    for(i=0;i<10;i++)
    {
        cout<<"\nEnter Number";
        cin>>num;
        ofile<<num<<endl;
    }
    ofile.close();

    ifstream ifile("Number.txt");
    ofstream evenfile("Even.txt");
    ofstream oddfile("Odd.txt");
    for(i=0;i<10;i++)
    {
        ifile>>n;
        if(n%2==0)
        {
            evenfile<<n<<endl;
        }
        else
            oddfile<<n<<endl;
    }
    ifile.close();
    oddfile.close();
    evenfile.close();

    cout<<"Please check file for output";
    return 0;
}
