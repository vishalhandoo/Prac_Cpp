#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> arr){
        for(int i = 1 ;i < arr.size();i++){
            arr[i]+=arr[i-1];
            /*nums[0] is always same as it's running sum will be itself only.*/
        }
        return arr; 
}

int main(){

}