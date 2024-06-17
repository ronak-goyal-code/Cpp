#include<iostream>
#include<vector>

using namespace std;

int knapscak(vector<int>& val , vector<int>& wt , int W, int n ,vector<vector<int>>& dp){
    if(n==0 || W<=0){
        return 0;
    }

    if(dp[n][W]!=-1){
        return dp[n][W];
    }
    if(wt[n-1]>W){
        return dp[n][W] = knapscak(val,wt,W,n-1,dp);
    }

    else{
        return dp[n][W] = max(knapscak(val,wt,W,n-1,dp),val[n-1] + knapscak(val,wt,W-wt[n-1],n-1,dp));
    }
}

int main(){
    int size;
    cout<<"Enter size of val and wt array : ";
    cin>>size;
    vector<int> val(size,0);
    vector<int> wt(size,0);
    cout<<"Enter values of item : ";
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        val[i] = x;
    }
    cout<<endl;
    cout<<"Enter wt of item : ";
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        wt[i] = x;
    }
    cout<<endl;
    int W;
    cout<<"Enter capacity of knapscak : ";
    cin>>W;
    vector<vector<int>> dp(size+1,vector<int> (W+1,-1));
    cout<<"Maximum profit is : "<<knapscak(val,wt,W,size,dp)<<endl;
    return 0;
}