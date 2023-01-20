#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1={10,20,30,40,50,60,90,80,4,5,6};
    vector<int> v2;
    sort(v1.rbegin(),v1.rend());
    double sum=0;
    for(int i = 0 ; i < v1.size(); i++){
        sum+=v1[i];
        cout<<v1[i]<<" ";
    }
    cout<<endl<<sum/v1.size();
    cout<<endl<<v1.at(0)<<endl;
    cout<<v1.at(v1.size()-1)<<endl;
}