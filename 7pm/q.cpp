#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    bool prime=true;
    if(n==0||n==1){
        prime=false;
    }
    for(int i = 2 ; i <= n/2 ;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

int main(){
    int number;
    cin>>number;
    bool returned=isPrime(number);
    if(returned==1){
        cout<<"The number entered is a prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}