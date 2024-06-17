#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","940","2901"};
    int max = stoi(arr[0]);
    for(int i=1; i<6; i++){
        if(stoi(arr[i])>max) max = stoi(arr[i]);
    }

    cout<<max;
}