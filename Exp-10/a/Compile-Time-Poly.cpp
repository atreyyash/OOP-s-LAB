#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void test(int i) {
	cout << "\n The int is " << i << endl;
}
void test(double  f) {
	cout << " The float is " << f << endl;
}
void test(char const *ch) {
	cout << " The char* is " << ch << endl;
}

int main() {
    cout<<"\t\t\t\t\t\tExperiment-10a"<<endl;
    cout<<"\t\t\t\t\t\tMade By : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll No. : 109-CSEA-19"<<endl;

	test(15);
	test(15.0);
	test("Fifteen");

	return 0;
}
