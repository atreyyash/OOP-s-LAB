#include<iostream>

using namespace std;

class dist
{
    int feet;
    int inch;
public:
    dist()
    {
        feet = 0;
        inch = 0;
    }
    dist(int f, int i)
    {
        feet = f;
        inch = i;
    }
    bool operator <(const dist &d)
    {
        if(feet<d.feet)
        {
            return true;
        }
        if(feet == d.feet && inch < d.inch)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    dist d1(15, 9), d2(20, 11);
    if(d1<d2)
        cout<<"D1 is less the D2"<<endl;
    if(d2<d1)
        cout<<"D2 is less then D1"<<endl;

    return 0;
}
