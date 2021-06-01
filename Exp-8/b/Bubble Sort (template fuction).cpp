#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <class t>
t bubble(t a[], t n)
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

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<", ";
    }
}

int main()
{
    cout<<"\t\t\t\t\t\tExperiment-7b"<<endl;
    cout<<"\t\t\t\t\t\tMade by : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll no. : 109-CSEA-19"<<endl;
    int n, a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Sorted Array : "<<endl;
    bubble(a, n);

    return 0;
}
