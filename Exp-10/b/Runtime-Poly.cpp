#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Alive {
public:
	void breathe() {
		cout << "\nHumans breathe.";
	}
};

class Dead: public Alive {
public:
	void breathe() {
		cout << "\nBut dead ones don't...";
	}
};

int main(){
    cout<<"\t\t\t\t\t\tExperiment-10b"<<endl;
    cout<<"\t\t\t\t\t\tMade By : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll No. : 109-CSEA-19"<<endl;

    Alive a;
    Dead d;
    a.breathe();
    d.breathe();

	return 0;
}
