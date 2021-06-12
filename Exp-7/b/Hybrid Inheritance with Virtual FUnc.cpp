#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class stu
{
    int id;
    char name[50];
public:
    void getstu()
    {
        cout<<"Enter Student Details :: "<<endl;
        cout<<"Id : ";
        cin>>id;
        cout<<"Name : ";
        cin>>name;
    }
    void putstu()
    {
        cout<<"Id : "<<endl;
        cout<<"Name : "<<endl;
    }
};

class marks : virtual public stu
{
protected:
    int t1, t2;
public:
    void getmarks()
    {
        cout<<"Enter Test 1 number : ";
        cin>>t1;
        cout<<"Enter Test 2 Number : ";
        cin>>t2;
    }
    void putmarks()
    {
        cout<<"Marks in Test 1 : "<<t1<<endl;
        cout<<"Marks in Test 2 : "<<t2<<endl;
    }
};

class sp
{
protected:
    int spmarks;
public:
    void getsp()
    {
        cout<<"Enter Sports Score : ";
        cin>>spmarks;
    }

};

class result : public marks, public sp
{
    float total;
public:
    void res()
    {
        total = t1 + t2 + spmarks;
        float r = total / 3;
        cout<<"Total :: "<<total<<endl;
        cout<<"Average :: "<<r<<endl;
    }
};

int main()
{
    result student;
    student.getstu();
    student.getmarks();
    student.getsp();
    student.res();
    return 0;
}
