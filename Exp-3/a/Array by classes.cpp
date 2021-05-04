#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

class student
{
    char name[30];
    string stuclass;
public:
    void getdata();
    void display();
};


void student :: getdata()
{
    cout<<"Student Name  :: ";
    cin>>name;
    cout<<"Class Pursuing ::  ";
    cin>>stuclass;
}

void student :: display()
{
    cout<<"Student Name ::  "<<name<<endl;
    cout<<"Student Class :: "<<stuclass<<endl;
}

int main()
{
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
        cout<<endl<<endl;
    }
    system("cls");
    cout<<"Information entered by user  ::  "<<endl;
    for(int i=0;i<n;i++)
    {
        s[i].display();
        cout<<endl<<endl;
    }

    return 0;

}
