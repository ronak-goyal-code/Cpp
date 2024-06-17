#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int helper(vector<int>& arr,int i,int j,vector<vector<int>>& dp){
    if(i==j){
        return 0;
    }
    int mini = INT_MAX;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    for(int k=i; k<j; k++){
        int ans = helper(arr,i,k,dp) + helper(arr,k+1,j,dp) + arr[i-1]*arr[k]*arr[j];
        mini = min(mini,ans);
        dp[i][j] = mini;
    }
    return mini;
}

int MCM(vector<int>& arr , int n){
    int i=1;
    int j=n-1;
    vector<vector<int>> dp(n,vector<int> (n,-1));
    return helper(arr,i,j,dp);
}

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array : ";
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        arr[i] = k;
    }
    cout<<"Minimum Number of Operation is : "<<MCM(arr,n)<<endl;
    return 0;
}