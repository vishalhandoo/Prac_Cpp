#include<bits/stdc++.h>
using namespace std;


void func(double a , double b){
    if(b==0){
        throw b;
    }
    else{
        a=a/b;
    }
}


int main(){

    try{
        func(10.25,0);
        func(10.6,5.3);
    }
    catch(double b){
        cout<<"Error code : "<<b;
    }
    return 0;
}