#include<iostream>
using namespace std;

class Numbers {
    int a, b;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    friend void greatest (Numbers N1);
};

void greatest(Numbers N1) {
    if (N1.a > N1.b)
        cout << "The greater number is: " << N1.a;
    else
        cout << "The greater number is: " << N1.b;
}

int main(){
    Numbers N1;
    N1.input();
    greatest(N1);

    cout<<endl<<"Made by: Yash Atrey"<<endl;
    cout<<"Roll no : 109-CSEA-19"<<endl;
    return 0;
}
