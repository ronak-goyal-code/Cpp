// leetcode 31
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    // 1) finding pivot index.
    int idx = -1;
    for(int i = n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    // 2) check if array is already greatest.
    if(idx==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    // 3) sorting / reverse after pivot.
    reverse(nums.begin()+idx+1,nums.end());
    // 4) finding next graetest element than pivot.
    int max;
    for(int i = idx+1; i<n; i++){
        if(nums[idx]<nums[i]){
            max = i;
            break;
        }
    }
    // 5) swaping idx and next greatest element.
    swap(nums[idx],nums[max]);
    return;

 }