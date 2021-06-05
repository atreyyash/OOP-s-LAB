#include<iostream>

using namespace std;

class compare
{
    int a;
public:
    void get()
    {
        cin>>a;
    }
    void operator ==(compare t2)
    {
        if(a==t2.a)
            cout<<"T1 and T2 are equal.";
        else
            cout<<"T1 and T2 are not equal.";
    }
};

int main()
{
    compare t1, t2;
    cout<<"Enter value of T1 object : ";
    t1.get();
    cout<<"ENter value of T2 object : ";
    t2.get();
    t1==t2;

    return 0;
}
