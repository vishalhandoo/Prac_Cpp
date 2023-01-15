#include<bits/stdc++.h>
using namespace std;

int main(){
    int number=2;
    int power=3;
    int result=1;
    for(int i = 0 ; i < power ; i++){
        result=result*number;
    }
    cout<<result;
    return 0;
}