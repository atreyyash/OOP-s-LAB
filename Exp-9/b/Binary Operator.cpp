#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class overloading {
    int value;
public:

    void setValue(int temp) {
        value = temp;
    }

    overloading operator+(overloading ob) {
        overloading t;
        t.value = value + ob.value;
        return (t);
    }

    void display() {
        cout << value << endl;
    }
};


int main() {
     cout<<"\t\t\t\t\t\tExperiment-9b"<<endl;
    cout<<"\t\t\t\t\t\tMade By : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll No. : 109-CSEA-19"<<endl;

    overloading obj1, obj2, result;
    int a, b;

    cout << "Enter the value of Complex Numbers a,b:";
    cin >> a>>b;
    obj1.setValue(a);
    obj2.setValue(b);

    result = obj1 + obj2;

    cout << "Input Values:\n";
    obj1.display();
    obj2.display();

    cout << "Result:";
    result.display();

    return 0;
}
