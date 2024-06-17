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

    int brr[columns][rows];
    for(int i=0; i<columns; i++){
        for(int j=0; j<rows; j++){
            brr[i][j] = arr[j][i];
        }
    }
    
    cout<<"transpose matrix : "<<endl;
    for(int i=0; i<columns; i++){
        for(int j=0; j<rows; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}