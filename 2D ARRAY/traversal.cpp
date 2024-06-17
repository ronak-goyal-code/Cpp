#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"enter no. of rows : ";
    cin>>rows;
    cout<<"enter no. of columns : ";
    cin>>columns;
    int arr[rows][columns];
    cout<<"enter the 2d array"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"2d array : "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}