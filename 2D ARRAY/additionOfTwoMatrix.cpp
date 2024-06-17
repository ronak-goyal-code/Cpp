#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"enter no. of rows : ";
    cin>>rows;
    cout<<"enter no. of columns : ";
    cin>>columns;
    int arr[rows][columns];
    cout<<"enter the first matrix : "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>arr[i][j];
        }
    }
    int brr[rows][columns];
    cout<<"enter the second matrix : "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>brr[i][j];
        }
    }
    int res[rows][columns];
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            res[i][j] = arr[i][j] + brr[i][j];
        }
    }
    cout<<"resultant matrix : "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}