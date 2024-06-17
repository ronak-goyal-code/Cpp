#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    sort(str.begin(),str.end()); // sort according to ascii value .
    cout<<str<<endl;
}