#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    Complex(int real=0, int img =0){
        this->real = real;
        this->img = img;
    }
    
    friend ostream & operator<<(ostream & out, Complex &C);
    
};

ostream & operator<<(ostream & out, Complex &C){
    out<<C.real<<" + i"<<C.img;
    return out;
}


int main(){
    Complex c1(2,3);
    cout<<c1;
}