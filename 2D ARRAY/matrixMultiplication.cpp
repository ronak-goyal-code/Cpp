#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no. of rows of matrix 1 : ";
    cin>>m;
    int n;
    cout<<"enter no. of cols of matrix 1 : ";
    cin>>n;
    int p;
    cout<<"enter no. of rows of matrix 2 : ";
    cin>>p;
    int q;
    cout<<"enter no. of cols of matrix 2 : ";
    cin>>q;
    if(n!=p){
        cout<<"Matrix Multiplication Is Not Exist.";
        return 0;
    }

    int arr[m][n];
    cout<<"enter the first matrix : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int brr[p][q];
    cout<<"enter the second matrix : "<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>brr[i][j];
        }
    }

    int res[m][q];
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            res[i][j] = 0;
            for(int k=0; k<n; k++){
                res[i][j] += arr[i][k] + brr[k][j];
            }
        }
    }

    cout<<"resultant matrix : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}