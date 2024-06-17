#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"enter no. of rows : ";
    cin>>rows;
    cout<<"enter no. of columns : ";
    cin>>columns;
    int arr[rows][columns];
    cout<<"enter the matrix : "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"WAVE PRINTING : "<<endl;
    for(int i=0; i<rows; i++){
        if(i%2==0){
            for(int j=0; j<columns; j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=columns-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}