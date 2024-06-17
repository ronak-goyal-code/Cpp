// only function leetcode 88.
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int>v;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else {
                v.push_back(nums2[j]);
                j++;
            }
            k++;
        }
        if(j==n){
            while(i<m){
                v.push_back(nums1[i]);
                i++;
                k++;
            }
        }

        if(i==m){
            while(j<n){
                v.push_back(nums2[j]);
                j++;
                k++;
            }
        }

        for(int i=0; i<m+n; i++){
            nums1[i]=v[i];
        }
        return ;
    }

    int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);

    vector<int>v2;
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);


    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // sort
    merge(v,3,v2,3);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


}