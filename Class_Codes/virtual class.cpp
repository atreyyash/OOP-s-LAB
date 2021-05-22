#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student
{
    int id;
    char name[20];
public:
    void getstudent()
    {
        cout<<"Enter Student Id : ";
        cin>>id;
        cout<<"Enter Student Name : ";
        cin>>name;
    }
    void putstudent()
    {
        cout<<"Student Details Are : "<<endl;
        cout<<"\t\tId : "<<id<<endl;
        cout<<"\t\tName : "<<name<<endl;
    }
};

class test1 : virtual public student
{
protected:
    float m1;
public:
    void gettest1()
    {
        cout<<"Enter Marks of Test-1 : ";
        cin>>m1;
    }
    void puttest1()
    {
        cout<<"\n\tMarks in Test-1 is : "<<m1<<endl;
    }
};

class test2 : virtual public student
{
protected:
    float m2;
public:
    void gettest2()
    {
        cout<<"Enter Marks of Test-2 : ";
        cin>>m2;
    }
    void puttest2()
    {
        cout<<"\n\tMarks in Test-2 is : "<<m2<<endl;
    }
};

class result : public test1, public test2
{
    float r, avg;
public:
    void showresult()
    {
        r = m1 + m2;
        avg = r /2;
        cout<<"\tTotal Marks : "<<r<<endl;
        cout<<"\tPercentage : "<<avg<<endl;
    }
};

int main()
{
    result s1;
    s1.getstudent();
    s1.gettest1();
    s1.gettest2();

    s1.putstudent();
    s1.puttest1();
    s1.puttest2();
    s1.showresult();

    return 0;
}
