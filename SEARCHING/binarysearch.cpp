#include<iostream>
#include<vector>
using namespace std;
// only function of binary search 
int search(vector<int>& nums, int target) {
    int n = nums.size();
    int hi = n-1;
    int lo = 0;
    int mid;
    while(lo<=hi){
        mid = (lo+hi)/2; // mid = lo + (hi-lo)/2  -> if hi and lo is large indexes.
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) lo = mid+1;
        else hi = mid-1;
    }

    return -1;
}