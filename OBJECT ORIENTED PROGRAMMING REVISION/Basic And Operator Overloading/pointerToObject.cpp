#include<iostream>
using namespace std;

class Rectangle{
public:
    float length;
    float breadth;

    float Area(){
        return length*breadth;
    }

    float Perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1;
    Rectangle* ptr;
    ptr = &r1;
    // Rectangle* ptr = new Rectangle;
    ptr->length = 10;
    ptr->breadth = 5;
    cout<<"Area is : "<<ptr->Area()<<endl;
    cout<<"Perimeter is : "<<ptr->Perimeter()<<endl;

    return 0;
}