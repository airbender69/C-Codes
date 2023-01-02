#include<iostream>
using namespace std;
int main()
{
    int *a=new(nothrow)int[5];
    int i;
    if(!a)
    {
        cout<<"not in space"<<endl;
        delete[]a;
    }
        else
        {
            cout<<"enter 5 numbers:"<<endl;
            for(i=0; i<5; i++)
            {
                cin>>a[i];
            }

        }
        cout<<"following are the element of array"<<endl;
        for(i=0; i<5; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
        return 0;
    }
