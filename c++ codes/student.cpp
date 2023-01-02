#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    double mark;
    public:
            student(string n, int a, double m)
            {
                name=n;
                age=a;
                mark=m;
            }
            string getname();
            int getage();
            double getmark();
            double getpercentage();

};
string student::getname()
{
    return name;
}
int student::getage()
{
    return age;
}
double student::getmark()
{
    return mark;
}
double student::getpercentage()
{
    return (mark*100/500);
}
int main()
{
    student s("ujjwol",18,90);
    cout<<"name="<<s.getname()<<endl;
     cout<<"age="<<s.getage()<<endl;
     cout<<"mark="<<s.getmark()<<endl;
      cout<<"percentage="<<s.getpercentage()<<endl;
      return 0;


}
