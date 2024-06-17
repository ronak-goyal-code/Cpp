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
    int minc = 0;
    int minr = 0;
    int maxc = columns-1;
    int maxr = rows-1;
    cout<<"SPIRIAL PRINTING : "<<endl;
    int tne = rows*columns;
    int count = 0;
    while(maxc>=minc && maxr>=minr){
        // right
        for(int j=minc; j<=maxc && count<tne; j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        // down
        for(int i=minr; i<=maxr && count<tne; i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        // left
        for(int j=maxc; j>=minc && count<tne; j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        // up
        for(int i=maxr; i>=minr && count<tne; i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    return 0;
}