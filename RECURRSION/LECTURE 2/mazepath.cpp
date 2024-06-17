#include<iostream>
using namespace std;
int maze(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int ans1 = maze(row,col-1);
    int ans2 = maze(row-1,col);
    return ans1 + ans2;
}
void print(int row,int col,string s){
    if(row<1 || col<1) return ;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    print(row,col-1,s+"D");
    print(row-1,col,s+"R");
    return ;
}

int main(){
    int row;
    cout<<"ENTER NUMBER OF ROWS : ";
    cin>>row;
    int col;
    cout<<"ENTER NUMBER OF COLUMNS : ";
    cin>>col;
    cout<<"TOTAL NUMBER OF WAYS TO REACH ARE : "<<maze(row,col);
    cout<<endl;
    cout<<"VARIOUS PATHS ARE FOLLOWING : "<<endl;
    print(row,col,"");
    return 0;
}