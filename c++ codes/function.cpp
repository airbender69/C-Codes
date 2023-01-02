#include<iostream>
using namespace std;
void add(int a, int b);
int main()
{
    int a,b;
    add(10,-2);
    return 0;
}
void add(int a, int b)
{
    cout<<"sum="<<(a+b)<<endl;
}
