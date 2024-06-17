#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter order of matrix : ";
    cin>>n;
    int A[n][n];
    cout<<"enter the square matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        }
    }

    cout<<"transpose of given square matrix : "<<endl;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

}