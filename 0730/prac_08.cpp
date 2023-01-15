//reverse a array by k elements

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int k,int n){
    while(k<n){
        swap(arr[k++],arr[n--]);
    }
}

void rotate(vector<int>& nums,int k){
    int n = nums.size();
    k%=n;

    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);

    for(int i = 0 ; i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7,8};
    int k = 2 ;
    rotate(nums,k);
    return 0;
}