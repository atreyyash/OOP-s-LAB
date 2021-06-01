#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template < class t>
t maxmin(t a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }

    int maxn = a[n-1];
    int minn = a[0];
    cout<<"Min & Max : "<<minn<<" "<<"& "<<maxn<<endl;
}

int main()
{
    cout<<"\t\t\t\t\t\tExperiment-7c"<<endl;
    cout<<"\t\t\t\t\t\tMade by : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll no. : 109-CSEA-19"<<endl;

    int n;
    float a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxmin(a, n);

    return 0;
}
