#include<iostream>
using namespace std;

class Complex{
public:
    int real;
    int img;

    Complex(int real=0, int img =0){
        this->real = real;
        this->img = img;
    }

    // Complex add(Complex x){
    //     Complex temp;
    //     temp.real = real + x.real;
    //     temp.img = img + x.img;
    //     return temp;
    // }
    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

};


int main(){
    Complex c1(2,3);
    Complex c2(3,6);
    Complex c3;
    //c3 = c1.add(c2);
    c3 = c1 + c2;
    cout<<c3.real<<" + i"<<c3.img;
}