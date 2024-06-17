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
    r1.length = 10;
    r1.breadth = 5;
    cout<<"Area is : "<<r1.Area()<<endl;
    cout<<"Perimeter is : "<<r1.Perimeter()<<endl;

    return 0;
}