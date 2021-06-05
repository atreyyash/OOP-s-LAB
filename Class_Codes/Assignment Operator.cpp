#include<iostream>

using namespace std;

class employee
{
    int id;
    double sal;
public:
    employee()
    {
        id = 0;
        sal = 0.0;
    }
    employee(int a, double b)
    {
        id = a;
        sal = b;
    }
    void operator = (const employee &emp)
    {
        id = emp.id;
        sal = emp.sal;
    }
    void display()
    {
        cout<<"Id : "<<id<<"  Salary : "<<sal<<endl;
    }
};

int main()
{
    employee e1(101, 20000.0), e2(102, 25000.0);
    e1.display();
    e2.display();
    e1 = e2;
    e1.display();

    return 0;

}
