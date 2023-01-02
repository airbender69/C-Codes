#include<iostream>
using namespace std;
class student{
string name;
int age;
double marks[5];
public:
    student(string n, int a, double m)
    {
        name=n;
        age=a;
        marks[5]=m;
    }

    void display();
    double getPercentage();
};
 void student::display()
 {
     cout<<"name="<<name<<endl;
     cout<<"age="<<age<<endl;

 }
 double student::getPercentage()
 {
     int i,n[5];
     int sum=0;
     for(i=0;i<5; i++)
     {
         cout<<"ENTER MARKS";
         cin>>n[i];
     }

     for(i=0; i<5;i++)
     {
      sum=sum+n[i];
     }
     cout<<"sum="<<sum<<endl;
 return 0;
 }

int main()
{
    student s("Ujjwol",19,95);
    s.display();
    s.getPercentage();
    int opt;
    while(opt!=0)
    {
        cout<<enter 2 data<<endl;
        cin>>opt;
    }
    switch(opt)
    {
    case 1:
        for(i=0; i<5; i++)
        {
                cout<<"enter marks=";
                cin>>n[i];

        }
    }


    return 0;



}
