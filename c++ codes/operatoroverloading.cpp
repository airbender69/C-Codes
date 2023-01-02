 //operator overloading
//unary operator overloading
#include<iostream>
using namespace std;
class count{
int value;
public:
count(int);
~count();//destructor is called
void operator ++();
void operator ++( int );
int getvalue();

};
count::count(int i):value(i){
cout<<"constructor is called"<<endl;
}
count::~count(){
cout<<"destructor is called at last"<<endl;
}
void count::operator ++(){
++value;
}
void count::operator ++(int){
value++;
}
int count::getvalue()
{
return value;
}
int main()
{
count a(10);
cout<<"before increment:value="<<a.getvalue()<<endl;
a++;
cout<<"after post increment:value="<<a.getvalue()<<endl;
++a;
cout<<"value after pree increment:value="<<a.getvalue()<<endl;
}
