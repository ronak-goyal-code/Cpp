#include<iostream>
using namespace std;

class Base{
public:
    int a;
    void display(){
        cout<<"Display of Base "<<a<<endl;
    }
};

class Dervied : public Base{
public:
    void show(){
        cout<<"Show Of Dervied "<<endl;
    }
};

int main(){
    Dervied d;
    d.a = 100;
    d.display();
    d.show();
}