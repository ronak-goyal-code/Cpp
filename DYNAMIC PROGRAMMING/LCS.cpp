#include<iostream>
#include<string>
#include<vector>
using namespace std;

int LCS(string x , string y , int m , int n , vector<vector<int>>& dp){
    if( n==0 || m==0 ){
        return 0;
    }

    if(dp[m][n]!=-1){
        return dp[m][n];
    }

    if(x[m-1]==y[n-1]){
        return dp[m][n]  = 1 + LCS(x,y,m-1,n-1,dp);
    }

    else {
        return dp[m][n] = max(LCS(x,y,m,n-1,dp),LCS(x,y,m-1,n,dp));
    }
}

int main(){
    string x , y ;
    cout<<"Enter Two Strings : ";
    cin>>x>>y;
    int m = x.size();
    int n = y.size();
    vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
    cout<<"LCS is : "<<LCS(x,y,m,n,dp)<<endl;
    return 0;
}