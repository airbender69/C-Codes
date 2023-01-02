#include<iostream>
using namespace std;
class box
{
    double length;
    double breadth;
    double height;
public:

        box(double l, double b, double h)
        {
            length=l;
            breadth=b;
            height=h;
        }

        double getlength();
        double getbreadth();
        double getheight();
        double getvolume();

    };
    double box::getlength()
    {
        return length;
    }
    double box::getbreadth()
    {
        return breadth;
    }
    double box::getheight()
    {
        return height;
    }
    double box::getvolume()
    {
        return(length*breadth*height);
    }
    int main()
    {
        box b(5,6,7);
        cout<<"length="<<b.getlength()<<endl;
        cout<<"breadth="<<b.getbreadth()<<endl;
        cout<<"height="<<b.getheight()<<endl;
        cout<<"volume="<<b.getvolume()<<endl;
        return 0;
    }
