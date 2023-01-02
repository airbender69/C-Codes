
//overload binary operator
#include<iostream>
using namespace std;
class complex
{
int real ;
int img;
public:
complex();
complex(int,int);
void display();
complex operator +(const complex &obj);

};
complex::complex():real(0),img(0)
{

}
complex::complex(int r,int i):real(r),img(i)
{
real=r;
img=i;
}
void complex::display()
{
if (img>0)
cout<<real<<"+"<<img<< "i"<< endl;
else
cout<<real<<"-"<<img<< " i"<< endl;
}
complex complex::operator +(const complex &obj)
{
complex temp;
temp.real = real +obj.real;
temp.img = img +obj.img;
return temp;
}

int main()
{
complex a(2,3),b(4,5),c;
a.display();
b.display();
c=a+b;
c.display();
return 0;
}
