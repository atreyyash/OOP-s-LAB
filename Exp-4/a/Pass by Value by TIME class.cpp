#include<iostream>
using namespace std;

class Time {
    int hrs, mins, secs;
public:
    void getTime () {
        cout << "\tHours: ";
        cin >> hrs;
        cout << "\tMinutes: ";
        cin >> mins;
        cout << "\tSeconds: ";
        cin >> secs;
    }

    void sum(Time t1, Time t2);
};

void Time::sum(Time t1, Time t2) {
    int h, m, s, s_tot, m_tot;
    s_tot = (t1.secs + t2.secs) / 60;
    s = (t1.secs + t2.secs) % 60;
    m_tot = (s_tot + t1.mins + t2.mins) / 60;
    m = (t1.mins + t2.mins) % 60;
    h = m_tot + t1.hrs + t2.hrs;

    cout << "\nTotal time is: ";
    cout << "\n\tHours: " << h;
    cout << "\n\tMinutes: " << m;
    cout << "\n\tSeconds: " << s;
}

int main () {
    Time t1, t2;

    cout << "Enter Time-1 details\n";
    t1.getTime();
    cout << "\nEnter Time-2 details\n";
    t2.getTime();

    t1.sum(t1, t2);
    cout<<endl<<"Made by : Yash Atrey"<<endl;
    cout<<"Roll no : 109-CSEA-19";
    return 0;
}
