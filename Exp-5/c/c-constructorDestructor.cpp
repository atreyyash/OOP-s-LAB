#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Sample {
    int i, j;
public:
    Sample(int a, int b) {
		cout<<"Constructing...\n";
        i = a;
        j = b;
    }

    ~Sample() {
        cout << "\nDestructing..."<<endl;
    }

    void display(void){
        cout <<"First number :"<< i << " \t";
        cout <<"\nSecond number :"<< j << " \n" ;
    }
};

int main () {
    int num1, num2;
    cout << "Enter 2 nos. :: ";
    cin >> num1 >> num2;

    cout<<"Displaying..."<<endl;
    Sample s1(num1, num2);
    s1.display();

    cout<<"Made By :: Yash Atrey"<<endl;
    cout<<"Roll no. :: 109-CSEA-19"<<endl;
    return 0;
}
