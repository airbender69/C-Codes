#include<iostream>
using namespace std;
void add(int a,int b, int c)
{
    cout<<"sum="<<(a+b+c)<<endl;

}
void add(double a, double b)
{
    cout<<"sum="<<(a+b)<<endl;
}
int main()
{
    add(10,20);
    add(4,5,6);
    add(4.5,5.5);
    return 0;
}
