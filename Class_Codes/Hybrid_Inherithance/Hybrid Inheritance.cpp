#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class stu
{
    int id;
    char name[20];
public:
    void getstu()
    {
        cout<<"Enter Id of the Student : ";
        cin>>id;
        cout<<"Enter Name of student : ";
        cin>>name;
    }
    void putstu()
    {
        cout<<"Student Id : "<<id<<endl;
        cout<<"Student Name : "<<name<<endl;
    }
};

class marks : public stu
{
protected:
    int m, p, c;
public:
    void getmarks()
    {
        cout<<"Enter the Marks of three subjects : ";
        cin>>m>>p>>c;
    }
};

class sports
{
protected:
    int smarks;
public:
    void getspmarks()
    {
        cout<<"Enter Sports Marks : ";
        cin>>smarks;
    }
};

class result : public sports, public marks
{
    int tot;
    float avg;
public:
    void show()
    {
        tot = m + p + c;
        avg = tot / 3.0;
        cout<<"Total Marks : "<<tot<<endl;
        cout<<"Average : "<<2avg<<endl;
        if(avg+smarks>100)
        {
            cout<<"Average+Sports : 100"<<endl;
        }
        else
        {
            cout<<"Average+Sports : "<<avg+smarks<<endl;
        }
    }
};

int main()
{
    cout<<"This is the example of Multiple Inheritance + Single Inheritance."<<endl;
    result s;
    s.getstu();
    s.getmarks();
    s.getspmarks();

    s.putstu();
    s.show();
}
