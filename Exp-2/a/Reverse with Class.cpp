#include<iostream>

using namespace std;

class Reverse
{
public:
    int n;
    int q=0, sum=0, revno=0, r;
    void getdata();
    void reverseNum();
    void sumrev();
    void display();
};

void Reverse :: getdata()
{
    cout<<"Enter the no.  ::  ";
    cin>>n;
}

void Reverse :: reverseNum()
{
    while(n!=0)
    {
        r=n%10;
        revno = revno * 10;
        revno += n % 10;
        n = n / 10;
        q+=r;
    }

}

void Reverse :: sumrev()
{
//    cout<<r<<endl;
    while(n>0)
    {
        q = n % 10;
        q += q;
        n = n/10;

    }
}

void Reverse :: display()
{
    cout<<"Reverse String :: "<<revno<<endl;
    cout<<"Sum :: "<<q<<endl;
}


int main()
{
    cout<<"Made by :: Yash Atrey"<<endl;
    Reverse no;
    no.getdata();
    no.reverseNum();
//    no.sumrev();
    no.display();
    cout<<"Roll no :: 109"<<endl;
    return 0;
}
