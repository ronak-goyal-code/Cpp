#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void change(Student &s){ // pass by reference
    s.name = "Harsh";
}
void change(Student *s){ // pass by reference
    s->name = "Sanket";
}
int main(){
    Student s("Radhav",76,92.6);
    cout<<s.name<<endl;
    change(s);
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;
    // another mehod of initialisation of Student s by the help of pointer.
    // Student* s = new Student("Radhav",76,92.6);
    // cout<<s->name<<endl;
    // change(s);
    // cout<<s->name<<endl;

}