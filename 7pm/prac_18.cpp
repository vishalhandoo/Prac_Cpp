#include<bits/stdc++.h>
using namespace std;


int pivotIndex(vector<int>& nums) {
    int sum = 0, absSum=0;
    for(auto i:nums){
        sum+=i;
    }
    for(int i =0 ; i< nums.size() ; i++){
        sum-=nums[i];
        if(sum==absSum){
            return i;
        }
        absSum+=nums[i];
    }
    return -1;
}


int main(){
    vector<int> nums={1,7,3,6,5,6};
    cout<<pivotIndex(nums);
    return 0;
}