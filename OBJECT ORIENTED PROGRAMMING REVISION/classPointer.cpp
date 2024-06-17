#include<iostream>
#include<string>
using namespace std;
class Pokemon{
public:
    string type;
    int attack;
    Pokemon(string type, int attack){
        this->type = type;
        this->attack = attack;
    }
};

void change(Pokemon *ptr){
    // (*ptr).attack = 100;
    // (*ptr).type = "Dragon";
    // other syntax (more use)
    ptr->attack = 100;
    ptr->type = "Dragon";
}
int main(){
    Pokemon pikachu("Electric",70);
    cout<<pikachu.type<<" "<<pikachu.attack<<endl;
    change(&pikachu);
    cout<<pikachu.type<<" "<<pikachu.attack<<endl;
    // Pokemon charizard("Fire",120);
    // cout<<charizard.type<<" "<<charizard.attack<<endl;
    return 0;
}