#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <class t1, class t2, class t3>
float maxnum(t1 a, t2 b, t3 c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    cout<<"\t\t\t\t\t\tExperiment-7a"<<endl;
    cout<<"\t\t\t\t\t\tMade by : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll no. : 109-CSEA-19"<<endl;
    float a, b, c;
    cin>>a>>b>>c;
    cout<<"Greatest number is : "<<maxnum(a, b, c)<<endl;
}
