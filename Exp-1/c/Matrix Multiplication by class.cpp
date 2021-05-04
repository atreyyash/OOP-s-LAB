#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class MatrixMul
{
public:
    int a[100][100], b[100][100], c[100][100], m, n;
    void getdata();
    void display();
};

void MatrixMul ::getdata()
{
    cout<<"Enter the no. of rows  :: ";
    cin>>m;
    cout<<"Enter the no. of column  :: ";
    cin>>n;

    cout<<"Enter Matrix A  ::  "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter Matrix  ::  ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
}

void MatrixMul ::display()
{
    cout<<"Matrix A  :: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Matrix B  ::  "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Multiplied Matrix C  :: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

}

int main()
{
    MatrixMul obj;

    obj.getdata();
    obj.display();

    return 0;
}
