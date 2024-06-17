#include<iostream>
using namespace std;

class Rectangle{
private:
    float length;
    float breadth;

public:

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
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);
    cout<<"Length is : "<<r1.getLength()<<endl;
    cout<<"Breadth is : "<<r1.getBreadth()<<endl;
    cout<<"Area is : "<<r1.Area()<<endl;
    cout<<"Perimeter is : "<<r1.Perimeter()<<endl;

    return 0;
}