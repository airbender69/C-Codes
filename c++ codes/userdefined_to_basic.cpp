//c++ program to conert basic to user defined data types
#include<iostream>
using namespace std;
class Distance
{
int centimeter;
float meter;
public:
Distance():meter(-1),centimeter(-1){}/*-1 is just a dummy
value cause 0 can be in meter but distance is never is negative*/
Distance( float cm):centimeter(cm)
{
meter = static_cast<float>(centimeter/100.0);//.0 helps float higher data type
}
void display()
{
cout<<centimeter<< "cm="<<meter<< "m."<<endl;
}
};
int main()
{
Distance d=125;
d.display();
return 0;
}
