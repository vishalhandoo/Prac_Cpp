#include<bits/stdc++.h>
using namespace std;

/*Pointers-refence variables*/
int main(){

    int a= 10;
    int *p;
    p=&a;
    cout<<"Address of p is : "<<p<<endl;
    //cout<<&a<<endl;
    cout<<"Value at p is : "<<*p<<endl;

    int b = 20;
    *p=b;
    cout<<"Address of p is : "<<p<<endl;
    cout<<"Value of p is : "<<*p<<endl;
    return 0;
}