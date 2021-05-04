#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class LinearSearch
{
public:
    int data[100], n, key;
    void getdata();
    void display();
};

void LinearSearch :: getdata()
{
    cout<<"Enter the length of array  ::  ";
    cin>>n;
    cout<<"Enter the elements of array  :: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"Enter key to be found  :: ";
    cin>>key;
}

void LinearSearch ::display()
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(key==data[i])
            {
                cout<<"The key is present at "<<i+1<<endl;
                flag++;
            }
    }
    if(flag==0)
    {
        cout<<"The key is not present in the array";
    }
}

int main()
{
    cout<<"Made By :: Yash Atrey"<<endl;
    LinearSearch ob;
    ob.getdata();
    ob.display();
    cout<<"Roll no.  ::  109";

    return 0;
}
