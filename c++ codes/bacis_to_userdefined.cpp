//c++ program to convert user defined data type to basic data types
#include<iostream>
using namespace std;
class weight
{
float kg;
public:
    weight(float k):kg(k)
{

}
operator int()
{
   int gram;
gram = static_cast<int >(kg*1000);
   return gram;
}
};
int main()
{
  weight w(1s);
  int gm=w;
  cout<<w<<"gm"<<endl;
  return 0;
}
