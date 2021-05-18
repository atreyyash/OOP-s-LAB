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
        cout<<"Enter Student Name :";
        cin>>name;
    }
    void putstudent()
    {
        cout<<"\nStudents Details are : "<<endl;;
        cout<<"Id : "<<id<<"\t\t"<<endl;
        cout<<"Name : "<<name<<"\t\t"<<endl;
    }
};

class marks
{
protected:
    int m1, m2, m3, m4;
public:
    void getmarks()
    {
        cout<<"Enter Marks of Student for 4 Subjects : "<<endl;
        cin>>m1>>m2>>m3>>m4;
    }
    void putmarks()
    {
        cout<<"Marks Obtained by student are : "<<endl;
        cout<<"\t\t\nSubject-1 : "<<m1;
        cout<<"\t\t\nSubject-2 : "<<m2;
        cout<<"\t\t\nSubject-3 : "<<m3;
        cout<<"\t\t\nSubject-4 : "<<m4;
    }
};

class result : public student, public marks
{
    int r;
    float avg;
public:
    void putresult()
    {
        r = m1+m2+m3+m4;
        avg = r / 4.0;
        cout<<"\nResult : "<<endl;
        cout<<"\t\tTotal Marks : "<<r<<endl;
        cout<<"\t\tAverage : "<<avg<<endl;
    }
};

int main()
{
    cout<<"\t\t\t\t\t\tExperiment-6(b)"<<endl;
    cout<<"\t\t\t\t\t\tMade by : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll no. : 109-CSEA-19"<<endl;
    result s1, s2;
    s1.getstudent();
    s1.getmarks();
    s2.getstudent();
    s2.getmarks();

    s1.putstudent();
    s1.putmarks();
    s1.putresult();
    s2.putstudent();
    s2.putmarks();
    s2.putresult();

    return 0;
}
