#include<iostream>
using namespace std;
int main()
{
    int *a=new int[5];
    int i;
    cout<<"enter 5 number:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
        cout<<"following are the elements of array"<<endl;
        for(i=0; i<5; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
        delete a;
        return 0;

}
