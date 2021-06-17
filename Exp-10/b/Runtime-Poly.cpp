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
    Alive a;
    Dead d;
    a.breathe();
    d.breathe();

	return 0;
}
