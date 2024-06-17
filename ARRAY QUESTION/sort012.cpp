#include<iostream>
#include<vector>
using namespace std;
// only functions
void sortColors(vector<int>& nums) {
        int noz = 0;
        int noo = 0;
        int nott = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else nott++;
        }

        for(int i=0; i<n; i++){
            if(i<noz) nums[i]=0;
            else if(i<noz+noo) nums[i]=1;
            else nums[i]=2;
        }

    
}

void dutchFlagAlog(vector<int>& nums){
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    while(mid<high){
        if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        else if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else {
            mid++;
        }
    }

    return;
}