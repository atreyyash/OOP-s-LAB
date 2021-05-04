#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class print
{
public:
    int n;
    void printno();
};

void print :: printno()
{
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        cout<<i<<", ";
    }
}

int main()
{
    print obj;

    obj.printno();
    cout<<"Made by :: Yash Atrey"<<endl<<"Roll no. :: 109"<<endl;
    return 0;
}
