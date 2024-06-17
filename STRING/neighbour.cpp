#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter string : ";
    getline(cin,str);
    int i= 0;
    int count = 0;
    while(str[i]!='\0'){
        if(str[i]!=str[i+1] && str[i] != str[i-1]){
            count++;
        }
        i++;
    }

    cout<<count<<endl;
}