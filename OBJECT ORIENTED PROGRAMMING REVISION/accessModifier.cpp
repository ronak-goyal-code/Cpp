#include<iostream>
using namespace std;
class Pokemon{
private:
    int attack;
public:
    string type;
    void set(int val){ // setter
        attack = val;
    }
    int get(){ // getter
        return attack;
    }
};

int main(){
    Pokemon pikachu;
    pikachu.type = "Electric";
    pikachu.set(70);
    cout<<pikachu.type<<" "<<pikachu.get()<<endl;
    return 0;
}