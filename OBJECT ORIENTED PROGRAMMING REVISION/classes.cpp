#include<iostream>
#include<string>
using namespace std;

class Student{ // user defined data type
public:
    string name;
    int rno;
    float percent;
    Student(){

    }
    
    Student(string n, int r, float p){ // constructor
        name = n;
        rno = r;
        percent = p;
    }

    Student(int r, string n){
        rno = r;
        name = n;
    }
};

int main(){
    Student s("Ronak",1403,95.2);
    // Student s(1403,"Ronak");
    // s.percent = 95.2;
    cout<<s.name<<" "<<s.rno<<" "<<s.percent<<endl;


    // Student s;
    // s.name = "Ronak";
    // s.rno = 1403;
    // s.percent = 95.2;

    // Student s = {"Ronak",1403,95.2};
    // cout<<s.name;

    // Student y;
    // y.name = "Yash";
    // y.rno = 1390;
    // y.percent = 93.4;

    // Student z = s; // copying s to z (deep copy).

    return 0;
}