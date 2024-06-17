#include<iostream>
using namespace std;

class Base{
public:
    void fun1(){
        cout<<"fun1 of base "<<endl;
    }
};

class Dervied : public Base{
public:
    void fun2(){
        cout<<"fun2 of derived "<<endl;
    }
};

int main(){
    Base* p = new Dervied();
    // p = new Dervied();
    p->fun1();
    // p->fun2(); --> wrong 
    Dervied* q;
    // q = new Base(); --> wrong
    // q->fun1(); 
    // q->fun2();
}