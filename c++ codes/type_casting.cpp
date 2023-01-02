//type casting
#include<iostream>
using namespace std;
int main(){
int a=10,x;
double b=20.45,c;
//implicit type casting
cout<<"this is implicit type casting:--->"<<endl;
cout<<"a="<<a<< "\tb="<<b<<endl;
c=a;
cout<<"a="<<a<< "\tc="<<c<<endl;
x=b;

cout<<"b="<<b<< "\tx="<<x<<endl;// explicit type casting

cout<<"\n\nthis is explicit type casting:--->"<<endl;
x=int(b);
//this is function style type casting
cout<<"b="<<b<< "\tx="<<x<<endl;
x=(int)b;
//this is c style type casting

cout<<"b="<<b<< "\tx="<<x<<endl;
x= static_cast<int>(b);
//this c++ style typr casting

cout<<"b="<<b<< "\tx="<<x<<endl;
return 0;

}
