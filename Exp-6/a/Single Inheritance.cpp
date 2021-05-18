<<<<<<< HEAD
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

class physicaldetails : public student
{
    float height, weight;
public:
    void getphy()
    {
        cout<<"Enter Height of student : ";
        cin>>height;
        cout<<"\nEnter Weight of student : ";
        cin>>weight;
    }
    void putphy()
    {
        cout<<"\nStudent Physical Details are : ";
        cout<<"\n\t\tHeight : "<<height;
        cout<<"\n\t\tWeight : \n"<<weight;
    }
};

int main()
{
    cout<<"\t\t\t\t\t\tExperiment-6(a)"<<endl;
    cout<<"\t\t\t\t\t\tMade by : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll no. : 109-CSEA-19"<<endl;
    physicaldetails p1, p2;
    p1.getstudent();
    p1.getphy();
    p2.getstudent();
    p2.getphy();

    p1.putstudent();
    p1.putphy();
    p2.putstudent();
    p2.putphy();

    return 0;
}
=======
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

class physicaldetails : public student
{
    float height, weight;
public:
    void getphy()
    {
        cout<<"Enter Height of student : ";
        cin>>height;
        cout<<"\nEnter Weight of student : ";
        cin>>weight;
    }
    void putphy()
    {
        cout<<"\nStudent Physical Details are : ";
        cout<<"\n\t\tHeight : "<<height;
        cout<<"\n\t\tWeight : \n"<<weight;
    }
};

int main()
{
    cout<<"\t\t\t\t\t\tExperiment-6(a)"<<endl;
    cout<<"\t\t\t\t\t\tMade by : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll no. : 109-CSEA-19"<<endl;
    physicaldetails p1, p2;
    p1.getstudent();
    p1.getphy();
    p2.getstudent();
    p2.getphy();

    p1.putstudent();
    p1.putphy();
    p2.putstudent();
    p2.putphy();

    return 0;
}
>>>>>>> 93241943b6e957ad8f1129dd32bd33f5a8c35745
