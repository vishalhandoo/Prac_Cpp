#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n == 0)return 0;
    if(n == 1)return 1;
    int small=fib(n-1);
    int big=fib(n-2);
    return small+big;
}

int main(){
    cout<<fib(5)<<endl;
}