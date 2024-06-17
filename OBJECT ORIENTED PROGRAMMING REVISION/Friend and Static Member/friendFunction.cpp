#include<iostream>
using namespace std;

class Test{
private: int a;
protected: int b;
public: int c;
    friend void fun();
};

void fun(){
    Test t;
    t.a = 10;
    t.b = 20;
    t.c = 30;
}

class Your;

class My{
private: int a;
protected: int b;
public: int c;
    friend Your;

};

class Your{
public:
    My m;
    void fun(){
        m.a = 10;
        m.b = 20;
        m.c = 30;

    }
};