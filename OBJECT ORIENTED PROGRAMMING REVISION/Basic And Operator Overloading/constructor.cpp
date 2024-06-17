#include<iostream>
using namespace std;

class Rectangle{
private:
    float length;
    float breadth;

public:

    Rectangle(){   // non parameterized constructor
        length = 1;
        breadth = 1;
    }

    Rectangle(float l , float b){   //parameterized constructor
        setLength(l);
        setBreadth(b);
    }

    // Rectangle(float l=1 , float b=1){   //parameterized constructor as well as default 
    //     setLength(l);
    //     setBreadth(b);
    // }

    Rectangle(Rectangle &r){ // copy constructor 
        length = r.length;
        breadth = r.breadth;
    }

    void setLength(float l){
        if(l<0) length = 1;
        else length = l;
    }

    void setBreadth(float b){
        if(b<0) breadth = 1;
        else breadth = b;
    }

    float getLength(){
        return length;
    }

    float  getBreadth(){
        return breadth;
    }
    float Area(){
        return length*breadth;
    }

    float Perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle* r1 = new Rectangle();
    cout<<"Area is : "<<r1->Area()<<endl;
    Rectangle r2(10,5);
    cout<<"Area is : "<<r2.Area()<<endl;
    Rectangle r3(r2);
    Rectangle r4 = r2;
    cout<<"Area is : "<<r3.Area()<<endl;
    cout<<"Area is : "<<r4.Area()<<endl;
    return 0;
}