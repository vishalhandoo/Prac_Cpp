#include<bits/stdc++.h>
using namespace std;



int main(){
    int userInput=422;
    int sum=0;
    int rem;
    while(userInput!=0){
        rem=userInput%10;
        sum=sum+rem;
        userInput=userInput/10;
    }
    cout<<sum;
    return 0;
}