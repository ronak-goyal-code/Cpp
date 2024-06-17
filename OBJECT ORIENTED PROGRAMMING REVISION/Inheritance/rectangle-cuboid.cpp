#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    Rectangle();                // constructor
    Rectangle(int l , int b);   // constructor
    Rectangle(Rectangle &r);    // constructor
    void setLength(int l);      // mutator
    void setBreadth(int b);     // mutator
    int getLength();            // accessor
    int getBreadth();           // accessor
    int area();                 // facilitator
    int perimeter();            // facilitator
    bool isSquare();            // enquary
    ~Rectangle();               // destructor
};

class Cuboid : public Rectangle{
private:
    int height;
public:
    Cuboid(int h){
        height = h;
    }
    int getHeight(){return height;}
    void setHeight(int h){height = h;}
    int volume(){
        return getLength()*getBreadth()*height;
    }
};

int main(){
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(3);
    cout<<"Volume is "<<c.volume()<<endl;
}

Rectangle :: Rectangle(){
    length = 1;
    breadth = 1;
}

Rectangle :: Rectangle(int l , int b){
    length = l;
    breadth = b;
}

Rectangle :: Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}

void Rectangle :: setLength(int l){
    length = l;
}

void Rectangle :: setBreadth(int b){
    breadth = b;
}

int Rectangle :: getLength(){
    return length;
}

int Rectangle :: getBreadth(){
    return breadth;
}

int Rectangle :: area(){
    return length*breadth;
}

int Rectangle :: perimeter(){
    return 2*(length+breadth);
}

bool Rectangle :: isSquare(){
    if(length==breadth) return true;
    else false;
}

Rectangle :: ~Rectangle(){
    cout<<"Rectangle destroyed "<<endl;
}