#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class BubbleSort
{
public:
    int data[100], n, key;
    void getdata();
    void display();
};

void BubbleSort :: getdata()
{
    cout<<"Enter the length of array  :: ";
    cin>>n;
    cout<<"Enter the elements of array :: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
//    cout<<"Enter the key to be searched  :: ";
//    cin>>key;
}

void BubbleSort ::display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(data[j] > data[j+1])
            {
                swap(data[j], data[j+1]);
            }
        }
    }

    cout<<"Sorted Array :: ";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<", ";
    }
}


int main()
{
    cout<<"Made by  :: Yash Atrey"<<endl;
    BubbleSort obj;
    obj.getdata();
    obj.display();
    cout<<endl<<"Roll No. :: 109";

    return 0;
}
