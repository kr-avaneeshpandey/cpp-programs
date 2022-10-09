#include<iostream>

using namespace std;

class student
{
   int roll;
   int mark[4];
  public:
   void getdata();
   void displaydata();
   void Calper();
};
void student :: getdata()
{
 cout<<"Enter roll no. : ";
 cin>>roll;
 for (int i=0;i<5;i++)
 {
  cout<<"Enter Mark of Subject"<<i+1<<" :";
  cin>>mark[i];
  }
}
void student :: displaydata()
{
  cout<<"Roll No.:"<<roll<<endl;
  for (int j=0;j<5;j++)
  {
   cout<<"Mark of Subject"<<j+1<<" :"<<mark[j]<<endl;
  }
}
void student :: Calper()
{
     int sum=0;
     float per;
     for (int i=0;i<5;i++)
     {
      sum+=mark[i];
     }
     per=sum/5;
     cout<<"Percentage of mark is :"<<per;
}

int main()
{
 student s1;
 s1.getdata();
 s1.displaydata();
 s1.Calper();
 return 0;
}
