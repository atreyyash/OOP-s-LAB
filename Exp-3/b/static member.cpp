#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class stat
{
private:
    static int x;

public:
    static void print()
    {
        cout<<"X  ::  "<<x<<endl;
    }
};

int stat :: x = 10;

int main()
{
    stat x;

    x.print();

    return 0;
}
