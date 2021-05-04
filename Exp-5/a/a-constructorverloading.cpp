#include<iostream>
using namespace std;

class Complex {

    public:
        int real, imaginary;

    // Dummy Constructor
    Complex(){}

    Complex(int tempReal, int tempImaginary) {
        real = tempReal;
        imaginary = tempImaginary;
    }

    Complex addReal(Complex C1, Complex C2) {
        Complex temp;
        temp.real = C1.real + C2.real;
        return temp;
    }

    Complex addComp(Complex C1, Complex C2) {
        Complex temp;
        temp.imaginary = C1.imaginary + C2.imaginary;
        return temp;
    }
};

int main() {

    Complex C1, C2, C3;
    cout << "\n\n";
    cout<<"Enter Complex number-1";
    cout << "\n\tReal part: ";
    cin >> C1.real;
    cout << "\tImaginary part: ";
    cin >> C1.imaginary;

    cout<<"\nEnter Complex number-2";
    cout << "\n\tReal part: ";
    cin >> C2.real;
    cout << "\tImaginary part: ";
    cin >> C2.imaginary;

    C3 = C3.addReal(C1, C2);
    C3 = C3.addComp(C1, C2);
    cout<<"Sum of complex number : " << C3.real << " + i" << C3.imaginary<<endl;
    cout<<"Made by: Yash Atrey"<<endl;
    cout<<"Roll no : 109-CSEA-19"<<endl;

    return 0;
}
