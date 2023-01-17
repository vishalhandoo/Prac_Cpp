#include<bits/stdc++.h>
using namespace std;


/*Polymorphism
  poly-many
  morph-forms*/

class FunctionOverloading{
    public:
    int mul(int a,int b,int c){
        return a*b*c;
    }

    int mul(int a,int b){
        return a*b;
    }
};


int main(){

    FunctionOverloading F1;
    cout<<F1.mul(5,6,7)<<endl;
    cout<<F1.mul(5,6);
}