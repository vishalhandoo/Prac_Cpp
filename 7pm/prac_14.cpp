#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> nums,int target){
        int index1=0;
        int index2=0;

        for(int i = 0 ; i < nums.size()-1 ; i++){
            for(int j = i+1 ; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    index1=i;
                    index2=j;
                }
            }
        }
        return {index1,index2};
}

int main(){

}