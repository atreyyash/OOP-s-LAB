#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Armstrong
{
public:
    int res, rem, n, temp, original;
    void getdata();
    void display();
};

void Armstrong :: getdata()
{
    cout<<"Enter a three digit no.  ::  ";
    cin>>original;
    temp = original;
    n=temp;

    while(original!=0)
    {
        rem = original % 10;
        res += rem * rem * rem;
        original /= 10;
    }
//    cout<<res<<endl;
    if(n==temp)
    {
        cout<<temp<<" is the Armstrong Number"<<endl;
    }
    else
    {
        cout<<temp<<"is not the Armstrong Number"<<endl;
    }
}

void Armstrong :: display()
{

}

int main()
{
    Armstrong obj;

    obj.getdata();
    obj.display();

    return 0;
}
