#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout<<"Non-param of base "<<endl;
    }
    Base(int x){
        cout<<"Param of base "<<x<<endl;
    }
};

class Derived : public Base{
public:
    Derived(){
        cout<<"Non-param of derived "<<endl;
    }
    Derived(int y){
        cout<<"Param of derived "<<y<<endl;
    }
    Derived(int x , int y) : Base(x){
        cout<<"Param of derived "<<y<<endl;
    }
};

int main(){
    Derived d;
    Derived d1(10);
    Derived d2(12,20);
}