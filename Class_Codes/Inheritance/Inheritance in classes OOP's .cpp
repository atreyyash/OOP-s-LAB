#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class fruits
{
public:
    static int noFruits;
    void totalFruits()
    {
        cout<<"Total Fruits in the basket are "<<noFruits<<endl;
    }
};

class mango: public fruits
{
    static int noMangoes;
public:
    void getMango(int x)
    {
        noMangoes = x;
        cout<<"No. of Mangoes are "<<noMangoes<<endl;
        noFruits = noFruits + noMangoes;
    }
};

class apples : public fruits
{
    static int noApples;
public:
    void getApples(int x)
    {
        noApples = x;
        cout<<"No. of Apples are : "<<noApples<<endl;
        noFruits = noFruits + noApples;
    }
};

int fruits::noFruits=0;
int mango::noMangoes=0;
int apples::noApples=0;

int main()
{
    apples a;
    mango m;
    a.getApples(20);
    a.totalFruits();
    m.getMango(15);
    m.totalFruits();
    return 0;
}
