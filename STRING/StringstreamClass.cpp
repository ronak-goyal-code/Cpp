#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s = "ronak is a computer science student.";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }

}