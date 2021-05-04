#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class stat
{
    int cnt;
    static int count;

public:
    stat()
    {
        cnt = ++count;
    }

    void displaycnt()
    {
        cout<<"object number is "<<cnt<<endl;
    }

    void displaycount()
    {
        cout<<"Count number is "<<count<<endl;
    }

};


int stat :: count;

int main()
{
    stat obj1, obj2;

    obj1.displaycnt();
    obj1.displaycount();

    obj2.displaycnt();
    obj2.displaycount();

    return 0;
}
